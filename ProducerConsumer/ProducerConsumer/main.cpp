#include<iostream>
#include<thread>
#include<mutex>
#include<condition_variable>
#include<deque>
#include<queue>
#include<string>
using namespace std;


class A
{
private:
	mutex mtx;
	condition_variable cova;
	queue<string, deque<string>> m_q;

public:
	void incache(int num)
	{
		lock_guard<mutex> lock(mtx);
		//cout << "当前线程号：" << this_thread::get_id() << endl;
		for (int i = 1; i <= num; i++)
		{
			static int count = 1;
			string str = "第" + to_string(i) + "个";

			m_q.push(str);
		}
		cova.notify_all();
	}

	void outcache()
	{
		while (true)
		{
			unique_lock<mutex> lock(mtx);
			while (m_q.empty())
			{
				cova.wait(lock);
			}

			string message = m_q.front();
			m_q.pop();
			cout << "当前线程号：" << this_thread::get_id() << "," << message << endl;
			lock.unlock();
			//处理数据
			this_thread::sleep_for(chrono::seconds(5));
		}
	}
};


int main()
{
	A a;
	thread t1(&A::incache, &a, 3);
	thread t2(&A::incache, &a, 4);
	thread t3(&A::incache, &a, 5);

	thread t4(&A::outcache, &a);
	thread t5(&A::outcache, &a);
	thread t6(&A::outcache, &a);

	t1.join();
	t2.join();
	t3.join();
	t4.join();
	t5.join();
	t6.join();
}