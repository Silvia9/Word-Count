    #include<fstream>
    #include<iostream>
    #include<string.h>
	using namespace std;
	
    int word=0,letter=0,i=0,sentence=0,temp=0;                  //��������� 
    char a[10000000];
    
    int main()
	{
	    	
		ifstream infile;
		string filename,function;
	    cout<<"wc.exe";
	    while(cin>>function)
	    {
	    	cin>>filename;                                     
	    	infile.open(filename.c_str(), ios::in);                //���ļ� 
	    	if(!infile)                                            //��δ�򿪣��򱨴� 
	    	{
	    		cerr<<"open error!"<<endl;
			}
			
			else
			{
			     if(function=="-c")                                   //������Ӧ�Ĺ����ַ� 
			     {
			     	for(i=0;i<10000000;i++)
			     	{
			     		  a[i]=infile.get() ; 
						 	if(((int)a[i]>=33)&&((int)a[i]<=126))      //���ַ�ת����ASCII��ͳ�Ƴ��ո񡢻��з�������ַ����� 
		                    letter++;
					 }
					 cout<<"letter="<<letter<<endl;   
				 }
				 
				 
				 
				 
				 else if(function=="-w")
			     {
			     	for(i=0;i<10000000;i++)
			     	{
			     			 a[i]=infile.get() ; 
							 if((a[i-1]!=' ')&&((a[i]==' ')||(a[i]=='\n')))  //ͳ�ư������з��ĵ��ʸ��� 
		                   	word++;
		                   	if(a[i]=='\n')                              //���з�����
		                	temp++;            
					 }
					 cout<<"word="<<word-temp<<endl;     
				 }
				 
				 
				  else if(function=="-s")
			     {
			     	for(i=0;i<10000000;i++)
			     	{
			     		    a[i]=infile.get() ; 
						 	if((a[i]=='.')||(a[i]=='!')||(a[i]=='?'))   //ͳ�ƾ��Ӹ��� 
		                    sentence++;
					 }
				    cout<<"sentence="<<sentence<<endl;    
				 }
				 
				 else
				 cout<<"NO found!"<<endl;
		
	     
			 
			}
				infile.close();
				cout<<"wc.exe";                            //�ر��ļ���Ϊ��һ�ε�ͳ����׼�� 
		
		}
		
		      	return 0;
	 } 
