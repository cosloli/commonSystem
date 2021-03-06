// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件

#ifndef PCH_H
#define PCH_H
// TODO: 添加要在此处预编译的标头
#define _CRT_SECURE_NO_WARNINGS
/*宏定义*/
#define BLOCK_SIZE 4096			//每个块的大小
#define BLOCK_NUM 262144		//文件系统中块的数量
#define FCB_SIZE 64				//文件控制块长度
#define FCB_NUM 258048			//控制单元的数量为4032 * 64 = 258048个，隶属于（1，4032），寻找控制块直接访问该块所在数组(0,258047)
#define IB_NUM 258111			//文件信息块数量为258111个，隶属于（4033，262144），编号(1,258111)
#define OP_LEN 128				//每次输入指令的最大长度
#define MAX_DIR_LEN 256			//最长目录长度
#define FCB_Location 1			//文件控制块起始位置
#define IB_Location 4033		//信息块起始位置
#define ROOT_FCB_ID 0			//根目录FCB编号
#define SUPER_Loacation 0		//系统块位置
#define DIR_T 0					//目录类型
#define FILE_T 1				//文件类型
#define EMPTY_T 2				//空类型
#define EXT_T 3					//扩展块类型
#define FCB_WIDTH 8				//fcb子目录          .个数
#define EXT_CB (FCB_WIDTH -1)	//扩展块指针下表
#define NONE -1					//空白
#define FCB_POS(x) (FCB_Location * BLOCK_SIZE + (x) * FCB_SIZE)	//FCB物理地址
#define IB_POS(x) (IB_Location * BLOCK_SIZE + (x - 1) * BLOCK_SIZE)	//IB物理地址
#define SUPER_POS (SUPER_Loacation * BLOCK_SIZE)				//系统块物理地址
/*宏定义*/
#endif //PCH_H
