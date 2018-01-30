//  header block begin
// /usr/include/qt/QtCore/qvariant.h
#include <qvariant.h>
#include <QtCore>

// QAssociativeIterable is pure virtual: false
// QAssociativeIterable has virtual projected: false
//  header block end

//  main block begin

class MyQAssociativeIterable : public QAssociativeIterable {
public:
  virtual ~MyQAssociativeIterable() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:680
// [120] QAssociativeIterable::const_iterator begin()
extern "C"
void* C_ZNK20QAssociativeIterable5beginEv(void *this_) {
  auto rv = ((QAssociativeIterable*)this_)->begin();
return new QAssociativeIterable::const_iterator(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:681
// [120] QAssociativeIterable::const_iterator end()
extern "C"
void* C_ZNK20QAssociativeIterable3endEv(void *this_) {
  auto rv = ((QAssociativeIterable*)this_)->end();
return new QAssociativeIterable::const_iterator(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:682
// [120] QAssociativeIterable::const_iterator find(const class QVariant &)
extern "C"
void* C_ZNK20QAssociativeIterable4findERK8QVariant(void *this_, const QVariant & key) {
  auto rv = ((QAssociativeIterable*)this_)->find(key);
return new QAssociativeIterable::const_iterator(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:684
// [16] QVariant value(const class QVariant &)
extern "C"
void* C_ZNK20QAssociativeIterable5valueERK8QVariant(void *this_, const QVariant & key) {
  auto rv = ((QAssociativeIterable*)this_)->value(key);
return new QVariant(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:686
// [4] int size()
extern "C"
int C_ZNK20QAssociativeIterable4sizeEv(void *this_) {
  return (int)((QAssociativeIterable*)this_)->size();
}
//  main block end
