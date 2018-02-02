//  header block begin
// /usr/include/qt/QtCore/qarraydata.h
#include <qarraydata.h>
#include <QtCore>

// QArrayData is pure virtual: false
// QArrayData has virtual projected: false
//  header block end

//  main block begin

class MyQArrayData : public QArrayData {
public:
  virtual ~MyQArrayData() {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qarraydata.h:57
// [8] void * data()
extern "C"
void* C_ZN10QArrayData4dataEv(void *this_) {
  return (void*)((QArrayData*)this_)->data();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qarraydata.h:64
// [8] const void * data()
extern "C"
void* C_ZNK10QArrayData4dataEv(void *this_) {
  return (void*)((QArrayData*)this_)->data();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qarraydata.h:74
// [1] bool isMutable()
extern "C"
bool C_ZNK10QArrayData9isMutableEv(void *this_) {
  return (bool)((QArrayData*)this_)->isMutable();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qarraydata.h:92
// [8] size_t detachCapacity(size_t)
extern "C"
size_t C_ZNK10QArrayData14detachCapacityEm(void *this_, size_t newSize) {
  return (size_t)((QArrayData*)this_)->detachCapacity(newSize);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qarraydata.h:99
// [4] QArrayData::AllocationOptions detachFlags()
extern "C"
void C_ZNK10QArrayData11detachFlagsEv(void *this_) {
  auto rv = ((QArrayData*)this_)->detachFlags();
/*return rv;*/
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qarraydata.h:107
// [4] QArrayData::AllocationOptions cloneFlags()
extern "C"
void C_ZNK10QArrayData10cloneFlagsEv(void *this_) {
  auto rv = ((QArrayData*)this_)->cloneFlags();
/*return rv;*/
}
// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qarraydata.h:123
// [8] QArrayData * sharedNull()
extern "C"
void* C_ZN10QArrayData10sharedNullEv() {
  return (void*)QArrayData::sharedNull();
}

extern "C"
void C_ZN10QArrayDataD2Ev(void *this_) {
  delete (QArrayData*)(this_);
}
//  main block end
