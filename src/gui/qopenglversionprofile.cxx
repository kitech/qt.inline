//  header block begin
// since 0x050100
// /usr/include/qt/QtGui/qopenglcontext.h
#ifndef protected
#define protected public
#endif
#include <qopenglcontext.h>
#include <QtGui>
#include "callback_inherit.h"

// QOpenGLVersionProfile is pure virtual: false
// QOpenGLVersionProfile has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQOpenGLVersionProfile : public QOpenGLVersionProfile {
public:
  virtual ~MyQOpenGLVersionProfile() {}
// void QOpenGLVersionProfile()
MyQOpenGLVersionProfile() : QOpenGLVersionProfile() {}
// void QOpenGLVersionProfile(const QSurfaceFormat &)
MyQOpenGLVersionProfile(const QSurfaceFormat & format) : QOpenGLVersionProfile(format) {}
// void QOpenGLVersionProfile(const QOpenGLVersionProfile &)
MyQOpenGLVersionProfile(const QOpenGLVersionProfile & other) : QOpenGLVersionProfile(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglcontext.h:87
// [-2] void QOpenGLVersionProfile()
extern "C" Q_DECL_EXPORT
void* C_ZN21QOpenGLVersionProfileC2Ev() {
  return  new QOpenGLVersionProfile();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglcontext.h:88
// [-2] void QOpenGLVersionProfile(const QSurfaceFormat &)
extern "C" Q_DECL_EXPORT
void* C_ZN21QOpenGLVersionProfileC2ERK14QSurfaceFormat(QSurfaceFormat* format) {
  return  new QOpenGLVersionProfile(*format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglcontext.h:89
// [-2] void QOpenGLVersionProfile(const QOpenGLVersionProfile &)
extern "C" Q_DECL_EXPORT
void* C_ZN21QOpenGLVersionProfileC2ERKS_(QOpenGLVersionProfile* other) {
  return  new QOpenGLVersionProfile(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglcontext.h:90
// [-2] void ~QOpenGLVersionProfile()
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLVersionProfileD2Ev(void *this_) {
  delete (QOpenGLVersionProfile*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglcontext.h:92
// [8] QOpenGLVersionProfile & operator=(const QOpenGLVersionProfile &)
extern "C" Q_DECL_EXPORT
void* C_ZN21QOpenGLVersionProfileaSERKS_(void *this_, QOpenGLVersionProfile* rhs) {
  auto& rv = ((QOpenGLVersionProfile*)this_)->operator=(*rhs);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglcontext.h:94
// [8] QPair<int, int> version()
extern "C" Q_DECL_EXPORT
void C_ZNK21QOpenGLVersionProfile7versionEv(void *this_) {
  auto rv = ((QOpenGLVersionProfile*)this_)->version();
/*return rv;*/
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglcontext.h:95
// [-2] void setVersion(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLVersionProfile10setVersionEii(void *this_, int majorVersion, int minorVersion) {
  ((QOpenGLVersionProfile*)this_)->setVersion(majorVersion, minorVersion);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglcontext.h:97
// [4] QSurfaceFormat::OpenGLContextProfile profile()
extern "C" Q_DECL_EXPORT
QSurfaceFormat::OpenGLContextProfile C_ZNK21QOpenGLVersionProfile7profileEv(void *this_) {
  return (QSurfaceFormat::OpenGLContextProfile)((QOpenGLVersionProfile*)this_)->profile();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglcontext.h:98
// [-2] void setProfile(QSurfaceFormat::OpenGLContextProfile)
extern "C" Q_DECL_EXPORT
void C_ZN21QOpenGLVersionProfile10setProfileEN14QSurfaceFormat20OpenGLContextProfileE(void *this_, QSurfaceFormat::OpenGLContextProfile profile) {
  ((QOpenGLVersionProfile*)this_)->setProfile(profile);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglcontext.h:100
// [1] bool hasProfiles()
extern "C" Q_DECL_EXPORT
bool C_ZNK21QOpenGLVersionProfile11hasProfilesEv(void *this_) {
  return (bool)((QOpenGLVersionProfile*)this_)->hasProfiles();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglcontext.h:101
// [1] bool isLegacyVersion()
extern "C" Q_DECL_EXPORT
bool C_ZNK21QOpenGLVersionProfile15isLegacyVersionEv(void *this_) {
  return (bool)((QOpenGLVersionProfile*)this_)->isLegacyVersion();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglcontext.h:102
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK21QOpenGLVersionProfile7isValidEv(void *this_) {
  return (bool)((QOpenGLVersionProfile*)this_)->isValid();
}

//  main block end
