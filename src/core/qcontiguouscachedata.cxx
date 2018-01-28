//  header block begin
// /usr/include/qt/QtCore/qcontiguouscache.h
#include <qcontiguouscache.h>
#include <QtCore>

// QContiguousCacheData is pure virtual: false
//  header block end

//  main block begin

class MyQContiguousCacheData : public QContiguousCacheData {
public:
};

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qcontiguouscache.h:67
// [8] QContiguousCacheData * allocateData(int, int)
extern "C"
void* C_ZN20QContiguousCacheData12allocateDataEii(int size, int alignment) {
  return (void*)QContiguousCacheData::allocateData(size, alignment);
}
//  main block end
