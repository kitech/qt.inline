//  header block begin
// /usr/include/qt/QtCore/qmetatype.h
#include <qmetatype.h>
#include <QtCore>

// VectorBoolElements is pure virtual: false
// VectorBoolElements has virtual projected: false
//  header block end

//  main block begin

class MyVectorBoolElements : public QtMetaTypePrivate::VectorBoolElements {
public:
  virtual ~MyVectorBoolElements() {}
};

//  main block end
