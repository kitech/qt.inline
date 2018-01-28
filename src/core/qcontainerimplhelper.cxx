//  header block begin
// /usr/include/qt/QtCore/qarraydata.h
#include <qarraydata.h>
#include <QtCore>

// QContainerImplHelper is pure virtual: false
//  header block end

//  main block begin

class MyQContainerImplHelper : public QtPrivate::QContainerImplHelper {
public:
};

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qarraydata.h:373
// [4] QtPrivate::QContainerImplHelper::CutResult mid(int, int *, int *)
extern "C"
QtPrivate::QContainerImplHelper::CutResult C_ZN9QtPrivate20QContainerImplHelper3midEiPiS1_(int originalLength, int * position, int * length) {
  return (QtPrivate::QContainerImplHelper::CutResult)QtPrivate::QContainerImplHelper::mid(originalLength, position, length);
}
//  main block end
