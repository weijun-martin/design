#include <log4cplus/log4cplus.h>

int main()
{
	//��Initializer����г�ʼ��
	log4cplus::Initializer initializer;

	//��1��������ConsoleAppender
	log4cplus::SharedAppenderPtr appender(new log4cplus::ConsoleAppender());

	//��2��������Appender�����ƺ������ʽ��SimpleLayout��
	appender->setName(LOG4CPLUS_TEXT("console"));

	log4cplus::tstring pattern = LOG4CPLUS_TEXT("%D{%m/%d/%y %H:%M:%S,%Q} [%t] %-5p %c - %m [%l]%n");
	appender->setLayout(std::unique_ptr<log4cplus::Layout>(new log4cplus::PatternLayout(pattern)));

	//��3�����õ�һ��Loggerʵ��������������־����ȼ���ֵ
	log4cplus::Logger logger = log4cplus::Logger::getInstance(LOG4CPLUS_TEXT("test"));
	logger.setLogLevel(log4cplus::INFO_LOG_LEVEL);

	//��4����ΪLoggerʵ�����ConsoleAppender
	logger.addAppender(appender);

	//��5����ʹ�ú꽫��־���
	LOG4CPLUS_INFO(logger, LOG4CPLUS_TEXT("Hello world"));

	return 0;
}