#pragma execution_character_set("utf-8")
#include "frmmain.h"
#include "quiwidget.h"
#include "appinit.h"
#include "frmlogin.h"

QString project_id;
QStringList table_name ;
QString title;
QString user;
QString version;
QString companyName;
int main(int argc, char *argv[])
{
#if(QT_VERSION >= QT_VERSION_CHECK(5,6,0))
    QApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif
    QApplication a(argc, argv);
    a.setFont(QFont(QUIConfig::FontName, QUIConfig::FontSize));
    QUIHelper::setCode();
    AppInit::Instance()->start();
    project_id = "95d0896d53134a6991dfccb3e5119752";
    title = "监视系统屏幕输出控制软件";
    version = "V1.0";
    user = "admin";
    companyName = "海南泽港科技有限公司@版权所有";
    table_name << "cms_jzy_wendang" << "cms_jzy_ycjkk" << "cms_jzy_yygl";
    QUIHelper::setStyle(QUIWidget::Style_Silvery);
    frmLogin w;
    w.show();
    return a.exec();
}
