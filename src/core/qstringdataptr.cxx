//  header block begin
// /usr/include/qt/QtCore/qstringliteral.h
#include <qstringliteral.h>
#include <QtCore>

// QStringDataPtr is pure virtual: false
// QStringDataPtr has virtual projected: false
//  header block end

//  main block begin

class MyQStringDataPtr : public QStringDataPtr {
public:
  virtual ~MyQStringDataPtr() {}
};


extern "C"
void C_ZN14QStringDataPtrD2Ev(void *this_) {
  delete (QStringDataPtr*)(this_);
}
//  main block end
