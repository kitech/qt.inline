//  header block begin
// /usr/include/qt/QtWidgets/qstylefactory.h
#include <qstylefactory.h>
#include <QtWidgets>

// QStyleFactory is pure virtual: false
// QStyleFactory has virtual projected: false
//  header block end

//  main block begin

class MyQStyleFactory : public QStyleFactory {
public:
  virtual ~MyQStyleFactory() {}
};

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstylefactory.h:55
// [8] QStyle * create(const class QString &)
extern "C"
void* C_ZN13QStyleFactory6createERK7QString(QString* arg0) {
  return (void*)QStyleFactory::create(*arg0);
}

extern "C"
void C_ZN13QStyleFactoryD2Ev(void *this_) {
  delete (QStyleFactory*)(this_);
}
//  main block end
