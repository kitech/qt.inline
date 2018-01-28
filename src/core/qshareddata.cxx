//  header block begin
// /usr/include/qt/QtCore/qshareddata.h
#include <qshareddata.h>
#include <QtCore>

// QSharedData is pure virtual: false
//  header block end

//  main block begin

class MyQSharedData : public QSharedData {
public:
MyQSharedData() : QSharedData() {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qshareddata.h:60
// [-2] void QSharedData()
extern "C"
void* C_ZN11QSharedDataC1Ev() {
  (MyQSharedData*)(0);
  return  new MyQSharedData();
}
//  main block end
