#include <QApplication>

#include <QWidget>
#include <QVBoxLayout>

int main(int argc, char* argv[]){

	QApplication app(argc,argv);
	QWidget w;
	QVBoxLayout l;
	w.setLayout(&l);
       
        w.show();
	
	return app.exec();


}
