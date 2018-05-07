// MYprince.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<ctime>
#include<vector>
#include<array>
#include<string>
#include <Windows.h>
#include<fstream>

using namespace std;
int main()
{
	
	
	cout << "hello world" << endl;
	string father_name, daughter_name,daughter_star_valve;//父女名字
	int year, months, birthday;//女儿的出生年月
	int intelligence_valve, strenth_valve, HP_valve,gold_value=1000;
	struct MYprince
	{
		string name_of_father;
		string name_of_daughter;
		string  name_of_star;
		int player_info[5];

	}player_myprince;
	while (1)
	{
		for (int i = 1; i <= 20; i++)
			cout << "■";
		cout << endl;
		cout << "1.创建人物" << endl << "2.开始游戏" << endl << "3.保存游戏" << endl << "4.退出游戏" << endl;
		cout << "请做出选择" << endl;
		int valve_game_choice;
		cin >> valve_game_choice;
		
		while (valve_game_choice <= 0 | valve_game_choice > 4)
		{
			cout << "请做出正确的选择：1-4" << endl;
			cin >> valve_game_choice;

		}
		if (valve_game_choice == 1)
		{
			string star[12][2] = { "摩羯座","水瓶座",
								   "水瓶座","双鱼座",
								   "双鱼座","白羊座",
								   "白羊座","金牛座",
								   "金牛座","双子座",
								   "双子座","巨蟹座",
								   "巨蟹座","狮子座",
								   "狮子座","处女座",
								   "处女座","天秤座",
								   "天秤座","天蝎座",
								   "天蝎座","射手座",
								   "射手座","摩羯座" };
			int month_turn[12] = { 19,18,20,19,20,21,22,22,22,23,22,21 };//每个月星座转换的转折日期
			cout << "请输入父亲的名字" << endl;
			cin >> father_name;
			cout << endl;
			cout << "请输入女儿的名字" << endl;
			cin >> daughter_name;
			cout << endl;
			cout << "自定义or随机制定？" << endl;
			cout << "0.我的地盘我做主   1.领养一个宝宝" << endl;
			bool choice;
			cin >> choice;
			if (choice == 0)
			{
				cout << "请输入月份" << endl;
				cin >> months;
				while (months <= 0 | months >= 13)    //月份校验
				{
					cout << "月份超出范围，请重新输入" << endl;
					cin >> months;
				}
				cout << "请输入生日" << endl;
				cin >> birthday;
				while (birthday <= 0 | birthday >= 32)//生日校验
				{
					cout << "生日超出范围，请重新输入" << endl;
					cin >> birthday;
				}
			}
			else
			{
				months = (unsigned)time(NULL) % 12 + 1;
				birthday = (unsigned)time(NULL) % 31 + 1;


			}
			if (birthday <= month_turn[months - 1])  //判断是哪个星座
			{
				daughter_star_valve = star[months - 1][0];
				//cout << "您是" << daughter_star_valve << endl;
			}
			else
			{
				daughter_star_valve = star[months - 1][1];
				//cout << "您是" << daughter_star_valve << endl;
			}
			if (daughter_star_valve == "摩羯座")//星座初始值
			{
				intelligence_valve = 20; strenth_valve = 90; HP_valve = 150;
			}
			else if (daughter_star_valve == "水瓶座")
			{
				intelligence_valve = 30; strenth_valve = 80; HP_valve = 140;
			}
			else if (daughter_star_valve == "双鱼座")
			{
				intelligence_valve = 40; strenth_valve = 70; HP_valve = 130;
			}
			else if (daughter_star_valve == "白羊座")
			{
				intelligence_valve = 50; strenth_valve = 60; HP_valve = 120;
			}
			else if (daughter_star_valve == "金牛座")
			{
				intelligence_valve = 60; strenth_valve = 50; HP_valve = 110;
			}
			else if (daughter_star_valve == "双子座")
			{
				intelligence_valve = 70; strenth_valve = 40; HP_valve = 100;
			}
			else if (daughter_star_valve == "狮子座")
			{
				intelligence_valve = 80; strenth_valve = 30; HP_valve = 90;
			}
			else if (daughter_star_valve == "处女座")
			{
				intelligence_valve = 90; strenth_valve = 30; HP_valve = 80;
			}
			else if (daughter_star_valve == "天秤座")
			{
				intelligence_valve = 100; strenth_valve = 110; HP_valve = 150;
			}
			else if (daughter_star_valve == "天蝎座")
			{
				intelligence_valve = 90; strenth_valve = 100; HP_valve = 80;
			}
			else if (daughter_star_valve == "射手座")
			{
				intelligence_valve = 80; strenth_valve = 90; HP_valve = 70;
			}
			else if (daughter_star_valve == "巨蟹座")
			{
				intelligence_valve = 60; strenth_valve = 90; HP_valve = 160;
			}

			/*for (auto p = begin(star); p != end(star); p++)
			{
				{for (auto q = begin(*p); q != end(*p); q++)
					cout << *q<<' ';
				}
				cout << endl;

			}*/
			cout << "您的宝贝女儿名字是：" << daughter_name <<endl<< "她的属性是：" << endl;
			cout << "星座：" << daughter_star_valve << endl;
			cout << "智力：" << intelligence_valve ;
			for (int j = 1; j <= 10; j++)
			{
				if (j <= intelligence_valve / 10)
					cout << "■";

				else
					cout << "□";

			}
			cout << endl;
			cout << "体力：" << strenth_valve ;
			for (int j = 1; j <= 10; j++)
			{
				if (j <= strenth_valve / 10)
					cout << "■";

				else
					cout << "□";

			}
			cout << endl;
			cout << "生命：" << HP_valve ;
			for (int j = 1; j <= 10; j++)
			{
				if (j <= HP_valve / 10)
					cout << "■";

				else
					cout << "□";

			}
			cout << endl;
			cout << endl;
			cout << "1.创建人物" << endl << "2.开始游戏" << endl << "3.保存游戏" << endl << "4.退出游戏" << endl;
			cout << "请做出选择" << endl;

			cin >> valve_game_choice;
			while (valve_game_choice <= 0 | valve_game_choice > 4)
			{
				cout << "请做出正确的选择：1-4" << endl;
				cin >> valve_game_choice;

			}
		}
		if (valve_game_choice == 2)
		{
			int study_choice_value;
			system("cls");
			cout << "1.学编程" << endl << "2.学舞蹈" << endl << "3.武术" << endl << "4.学画画" <<"5.退出"<< endl;
			cout << "请选择:1-5" << endl;
			cin >> study_choice_value;
			while (study_choice_value != 5)
			{
				if (study_choice_value == 1)
				{
					intelligence_valve += 10;
					gold_value -= 50;
					cout << "智力：" << intelligence_valve << endl;
					cout << "体力：" << strenth_valve << endl;
					cout << "生命：" << HP_valve << endl;
					cout << "金钱：" << gold_value;
					cout << endl;

				}
				if (study_choice_value == 2)
				{
					strenth_valve += 10;
					gold_value -= 60;
					cout << "智力：" << intelligence_valve << endl;
					cout << "体力：" << strenth_valve << endl;
					cout << "生命：" << HP_valve << endl;
					cout << "金钱：" << gold_value;
					cout << endl;
				}
				if (study_choice_value == 3)
				{
					HP_valve += 10;
					gold_value -= 60;
					cout << "智力：" << intelligence_valve << endl;
					cout << "体力：" << strenth_valve << endl;
					cout << "生命：" << HP_valve << endl;
					cout << "金钱：" << gold_value;
					cout << endl;
				}
				if (study_choice_value == 4)
				{

					gold_value -= 60;
					cout << "智力：" << intelligence_valve << endl;
					cout << "体力：" << strenth_valve << endl;
					cout << "生命：" << HP_valve << endl;
					cout << "金钱：" << gold_value;
					cout << endl;
				}
				//cout << "1.学编程" << endl << "2.学舞蹈" << endl << "3.武术" << endl << "4.学画画" << "5.退出" << endl;
				//cout << "请选择:1-5" << endl;
				cin >> study_choice_value;
			}
			if (study_choice_value == 5)
			{
				system("cls");
			//	cout << "1.创建人物" << endl << "2.开始游戏" << endl << "3.保存游戏" << endl << "4.退出游戏" << endl;
				//cout << "请做出选择" << endl;


			}
		}
		if (valve_game_choice == 3)
		{
			player_myprince.name_of_daughter = father_name;
			player_myprince.name_of_daughter = daughter_name;
			player_myprince.name_of_star = daughter_star_valve;
			player_myprince.player_info[0] = intelligence_valve;
			player_myprince.player_info[1] = strenth_valve;
			player_myprince.player_info[2] = HP_valve;
			player_myprince.player_info[3] = gold_value;
			system("cls");
			ofstream outf;
			outf.open("myprince_01.txt");
			outf <<  "您的宝贝女儿名字是：" << endl << daughter_name << endl << "她的属性是：" << endl;
			outf << "星座：" << daughter_star_valve << endl;
			outf << "智力：" << intelligence_valve << endl;
			outf << "体力：" << strenth_valve << endl;
			outf << "金钱：" << gold_value << endl;
			outf.close();


			cout << "您的宝贝女儿名字是：" << endl<<daughter_name <<endl<< "她的属性是：" << endl;
			cout << "星座：" << daughter_star_valve << endl;
			cout << "智力：" << intelligence_valve <<endl;
			
			cout << "体力：" << strenth_valve << endl;
			cout << "生命：" << HP_valve << endl;
			cout << "金钱：" << gold_value << endl;
			cout << endl;

		}
		if (valve_game_choice == 4)
		{    system("cls");
			int after_time_off = 10;
			cout << "byebye!" << endl;
			while (after_time_off > 0)
			{
				Sleep(1000);
				cout << after_time_off;
				cout << endl;
				after_time_off--;
				
			}
			
			exit(0);

		}
	}
    return 0;
}

