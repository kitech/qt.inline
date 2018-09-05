//  header block begin
// since 0x050000
// /usr/include/qt/QtGui/qopenglshaderprogram.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qopenglshaderprogram.h>
#include <QtGui>
#include "callback_inherit.h"

// QOpenGLShaderProgram is pure virtual: false
// QOpenGLShaderProgram has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQOpenGLShaderProgram_t {
  QByteArrayData data[1];
  char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQOpenGLShaderProgram_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQOpenGLShaderProgram_t qt_meta_stringdata_MyQOpenGLShaderProgram = {
   {
  QT_MOC_LITERAL(0, 0, 22), // "MyQOpenGLShaderProgram"
  },
  "MyQOpenGLShaderProgram"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQOpenGLShaderProgram[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQOpenGLShaderProgram : public QOpenGLShaderProgram {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QOpenGLShaderProgram::staticMetaObject,
  qt_meta_stringdata_MyQOpenGLShaderProgram.data,
  qt_meta_data_MyQOpenGLShaderProgram,
  qt_static_metacall, nullptr, nullptr
}};
virtual const QMetaObject *metaObject() const override {
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)this, (char*)"metaObject", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (QMetaObject*)irv; }
  return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject; 
}
virtual void *qt_metacast(const char *_clname) override {
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)this, (char*)"qt_metacast", &handled, 1, (uint64_t)_clname, 0, 0, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (void*)irv; }
  if (!_clname) return nullptr;
  if (!strcmp(_clname, qt_meta_stringdata_MyQOpenGLShaderProgram.stringdata0))
      return static_cast<void*>(this);
  return QOpenGLShaderProgram::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QOpenGLShaderProgram::qt_metacall(_c, _id, _a);
   if (_id < 0 ) return _id;
   if (qt_metacall_fnptr != 0) {
      return qt_metacall_fnptr(this, _c, _id, _a);
   }
   int handled = 0;
   auto irv = callbackAllInherits_fnptr((void*)this, (char*)"qt_metacall", &handled, 3, (uint64_t)_c, (uint64_t)_id, (uint64_t)_a, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (int)irv; }
   return _id;
  }
/*static*/ inline QString tr(const char *s, const char *c = nullptr, int n = -1)
{ return staticMetaObject.tr(s, c, n); }
/*static*/ inline QString trUtf8(const char *s, const char *c = nullptr, int n = -1)
 { return staticMetaObject.tr(s, c, n); }
Q_DECL_HIDDEN_STATIC_METACALL static void qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a){
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)_o, (char*)"qt_static_metacall", &handled, 4, (uint64_t)_o, (uint64_t)_c, (uint64_t)_id, (uint64_t)_a, 0, 0, 0, 0, 0, 0);
}
private: struct QPrivateSignal {};

public:
  void* (*qt_metacast_fnptr)(void*, char*) = nullptr;
  int (*qt_metacall_fnptr)(QObject *, QMetaObject::Call, int, void **) = nullptr;
public:
  virtual ~MyQOpenGLShaderProgram() {}
// void QOpenGLShaderProgram(QObject *)
MyQOpenGLShaderProgram(QObject * parent) : QOpenGLShaderProgram(parent) {}
};

extern "C" Q_DECL_EXPORT
void* C_QOpenGLShaderProgram_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQOpenGLShaderProgram* qo = (MyQOpenGLShaderProgram*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:115
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QOpenGLShaderProgram10metaObjectEv(void *this_) {
  return (void*)((QOpenGLShaderProgram*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:115
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN20QOpenGLShaderProgram11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QOpenGLShaderProgram*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:115
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN20QOpenGLShaderProgram11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QOpenGLShaderProgram*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:115
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN20QOpenGLShaderProgram2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QOpenGLShaderProgram::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:115
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN20QOpenGLShaderProgram6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QOpenGLShaderProgram::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:117
// [-2] void QOpenGLShaderProgram(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN20QOpenGLShaderProgramC2EP7QObject(QObject * parent) {
  return  new MyQOpenGLShaderProgram(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:118
// [-2] void ~QOpenGLShaderProgram()
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgramD2Ev(void *this_) {
  delete (QOpenGLShaderProgram*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:120
// [1] bool addShader(QOpenGLShader *)
extern "C" Q_DECL_EXPORT
bool C_ZN20QOpenGLShaderProgram9addShaderEP13QOpenGLShader(void *this_, QOpenGLShader * shader) {
  return (bool)((QOpenGLShaderProgram*)this_)->addShader(shader);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:121
// [-2] void removeShader(QOpenGLShader *)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram12removeShaderEP13QOpenGLShader(void *this_, QOpenGLShader * shader) {
  ((QOpenGLShaderProgram*)this_)->removeShader(shader);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:122
// [-2] QList<QOpenGLShader *> shaders()
extern "C" Q_DECL_EXPORT
QList<QOpenGLShader *>* C_ZNK20QOpenGLShaderProgram7shadersEv(void *this_) {
  auto rv = ((QOpenGLShaderProgram*)this_)->shaders();
return new QList<QOpenGLShader *>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:124
// [1] bool addShaderFromSourceCode(QOpenGLShader::ShaderType, const char *)
extern "C" Q_DECL_EXPORT
bool C_ZN20QOpenGLShaderProgram23addShaderFromSourceCodeE6QFlagsIN13QOpenGLShader13ShaderTypeBitEEPKc(void *this_, QFlags<QOpenGLShader::ShaderTypeBit> type_, const char * source) {
  return (bool)((QOpenGLShaderProgram*)this_)->addShaderFromSourceCode(type_, source);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:125
// [1] bool addShaderFromSourceCode(QOpenGLShader::ShaderType, const QByteArray &)
extern "C" Q_DECL_EXPORT
bool C_ZN20QOpenGLShaderProgram23addShaderFromSourceCodeE6QFlagsIN13QOpenGLShader13ShaderTypeBitEERK10QByteArray(void *this_, QFlags<QOpenGLShader::ShaderTypeBit> type_, QByteArray* source) {
  return (bool)((QOpenGLShaderProgram*)this_)->addShaderFromSourceCode(type_, *source);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:126
// [1] bool addShaderFromSourceCode(QOpenGLShader::ShaderType, const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZN20QOpenGLShaderProgram23addShaderFromSourceCodeE6QFlagsIN13QOpenGLShader13ShaderTypeBitEERK7QString(void *this_, QFlags<QOpenGLShader::ShaderTypeBit> type_, QString* source) {
  return (bool)((QOpenGLShaderProgram*)this_)->addShaderFromSourceCode(type_, *source);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:127
// [1] bool addShaderFromSourceFile(QOpenGLShader::ShaderType, const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZN20QOpenGLShaderProgram23addShaderFromSourceFileE6QFlagsIN13QOpenGLShader13ShaderTypeBitEERK7QString(void *this_, QFlags<QOpenGLShader::ShaderTypeBit> type_, QString* fileName) {
  return (bool)((QOpenGLShaderProgram*)this_)->addShaderFromSourceFile(type_, *fileName);
}

// Public Visibility=Default Availability=Available
// since 5.9
// /usr/include/qt/QtGui/qopenglshaderprogram.h:129
// [1] bool addCacheableShaderFromSourceCode(QOpenGLShader::ShaderType, const char *)
#if QT_VERSION >= 0x050900
extern "C" Q_DECL_EXPORT
bool C_ZN20QOpenGLShaderProgram32addCacheableShaderFromSourceCodeE6QFlagsIN13QOpenGLShader13ShaderTypeBitEEPKc(void *this_, QFlags<QOpenGLShader::ShaderTypeBit> type_, const char * source) {
  return (bool)((QOpenGLShaderProgram*)this_)->addCacheableShaderFromSourceCode(type_, source);
}
#endif // QT_VERSION >= 0x050900

// Public Visibility=Default Availability=Available
// since 5.9
// /usr/include/qt/QtGui/qopenglshaderprogram.h:130
// [1] bool addCacheableShaderFromSourceCode(QOpenGLShader::ShaderType, const QByteArray &)
#if QT_VERSION >= 0x050900
extern "C" Q_DECL_EXPORT
bool C_ZN20QOpenGLShaderProgram32addCacheableShaderFromSourceCodeE6QFlagsIN13QOpenGLShader13ShaderTypeBitEERK10QByteArray(void *this_, QFlags<QOpenGLShader::ShaderTypeBit> type_, QByteArray* source) {
  return (bool)((QOpenGLShaderProgram*)this_)->addCacheableShaderFromSourceCode(type_, *source);
}
#endif // QT_VERSION >= 0x050900

// Public Visibility=Default Availability=Available
// since 5.9
// /usr/include/qt/QtGui/qopenglshaderprogram.h:131
// [1] bool addCacheableShaderFromSourceCode(QOpenGLShader::ShaderType, const QString &)
#if QT_VERSION >= 0x050900
extern "C" Q_DECL_EXPORT
bool C_ZN20QOpenGLShaderProgram32addCacheableShaderFromSourceCodeE6QFlagsIN13QOpenGLShader13ShaderTypeBitEERK7QString(void *this_, QFlags<QOpenGLShader::ShaderTypeBit> type_, QString* source) {
  return (bool)((QOpenGLShaderProgram*)this_)->addCacheableShaderFromSourceCode(type_, *source);
}
#endif // QT_VERSION >= 0x050900

// Public Visibility=Default Availability=Available
// since 5.9
// /usr/include/qt/QtGui/qopenglshaderprogram.h:132
// [1] bool addCacheableShaderFromSourceFile(QOpenGLShader::ShaderType, const QString &)
#if QT_VERSION >= 0x050900
extern "C" Q_DECL_EXPORT
bool C_ZN20QOpenGLShaderProgram32addCacheableShaderFromSourceFileE6QFlagsIN13QOpenGLShader13ShaderTypeBitEERK7QString(void *this_, QFlags<QOpenGLShader::ShaderTypeBit> type_, QString* fileName) {
  return (bool)((QOpenGLShaderProgram*)this_)->addCacheableShaderFromSourceFile(type_, *fileName);
}
#endif // QT_VERSION >= 0x050900

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:134
// [-2] void removeAllShaders()
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram16removeAllShadersEv(void *this_) {
  ((QOpenGLShaderProgram*)this_)->removeAllShaders();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:136
// [1] bool link()
extern "C" Q_DECL_EXPORT
bool C_ZN20QOpenGLShaderProgram4linkEv(void *this_) {
  return (bool)((QOpenGLShaderProgram*)this_)->link();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:137
// [1] bool isLinked()
extern "C" Q_DECL_EXPORT
bool C_ZNK20QOpenGLShaderProgram8isLinkedEv(void *this_) {
  return (bool)((QOpenGLShaderProgram*)this_)->isLinked();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:138
// [8] QString log()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QOpenGLShaderProgram3logEv(void *this_) {
  auto rv = ((QOpenGLShaderProgram*)this_)->log();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:140
// [1] bool bind()
extern "C" Q_DECL_EXPORT
bool C_ZN20QOpenGLShaderProgram4bindEv(void *this_) {
  return (bool)((QOpenGLShaderProgram*)this_)->bind();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:141
// [-2] void release()
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram7releaseEv(void *this_) {
  ((QOpenGLShaderProgram*)this_)->release();
}

// Public Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtGui/qopenglshaderprogram.h:143
// [1] bool create()
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
bool C_ZN20QOpenGLShaderProgram6createEv(void *this_) {
  return (bool)((QOpenGLShaderProgram*)this_)->create();
}
#endif // QT_VERSION >= 0x050300

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:145
// [4] GLuint programId()
extern "C" Q_DECL_EXPORT
GLuint C_ZNK20QOpenGLShaderProgram9programIdEv(void *this_) {
  return (GLuint)((QOpenGLShaderProgram*)this_)->programId();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:147
// [4] int maxGeometryOutputVertices()
extern "C" Q_DECL_EXPORT
int C_ZNK20QOpenGLShaderProgram25maxGeometryOutputVerticesEv(void *this_) {
  return (int)((QOpenGLShaderProgram*)this_)->maxGeometryOutputVertices();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:149
// [-2] void setPatchVertexCount(int)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram19setPatchVertexCountEi(void *this_, int count) {
  ((QOpenGLShaderProgram*)this_)->setPatchVertexCount(count);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:150
// [4] int patchVertexCount()
extern "C" Q_DECL_EXPORT
int C_ZNK20QOpenGLShaderProgram16patchVertexCountEv(void *this_) {
  return (int)((QOpenGLShaderProgram*)this_)->patchVertexCount();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:152
// [-2] void setDefaultOuterTessellationLevels(const QVector<float> &)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram33setDefaultOuterTessellationLevelsERK7QVectorIfE(void *this_, QVector<float>* levels) {
  ((QOpenGLShaderProgram*)this_)->setDefaultOuterTessellationLevels(*levels);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:153
// [-2] QVector<float> defaultOuterTessellationLevels()
extern "C" Q_DECL_EXPORT
void C_ZNK20QOpenGLShaderProgram30defaultOuterTessellationLevelsEv(void *this_) {
  auto rv = ((QOpenGLShaderProgram*)this_)->defaultOuterTessellationLevels();
/*return rv;*/
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:155
// [-2] void setDefaultInnerTessellationLevels(const QVector<float> &)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram33setDefaultInnerTessellationLevelsERK7QVectorIfE(void *this_, QVector<float>* levels) {
  ((QOpenGLShaderProgram*)this_)->setDefaultInnerTessellationLevels(*levels);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:156
// [-2] QVector<float> defaultInnerTessellationLevels()
extern "C" Q_DECL_EXPORT
void C_ZNK20QOpenGLShaderProgram30defaultInnerTessellationLevelsEv(void *this_) {
  auto rv = ((QOpenGLShaderProgram*)this_)->defaultInnerTessellationLevels();
/*return rv;*/
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:158
// [-2] void bindAttributeLocation(const char *, int)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram21bindAttributeLocationEPKci(void *this_, const char * name, int location) {
  ((QOpenGLShaderProgram*)this_)->bindAttributeLocation(name, location);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:159
// [-2] void bindAttributeLocation(const QByteArray &, int)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram21bindAttributeLocationERK10QByteArrayi(void *this_, QByteArray* name, int location) {
  ((QOpenGLShaderProgram*)this_)->bindAttributeLocation(*name, location);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:160
// [-2] void bindAttributeLocation(const QString &, int)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram21bindAttributeLocationERK7QStringi(void *this_, QString* name, int location) {
  ((QOpenGLShaderProgram*)this_)->bindAttributeLocation(*name, location);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:162
// [4] int attributeLocation(const char *)
extern "C" Q_DECL_EXPORT
int C_ZNK20QOpenGLShaderProgram17attributeLocationEPKc(void *this_, const char * name) {
  return (int)((QOpenGLShaderProgram*)this_)->attributeLocation(name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:163
// [4] int attributeLocation(const QByteArray &)
extern "C" Q_DECL_EXPORT
int C_ZNK20QOpenGLShaderProgram17attributeLocationERK10QByteArray(void *this_, QByteArray* name) {
  return (int)((QOpenGLShaderProgram*)this_)->attributeLocation(*name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:164
// [4] int attributeLocation(const QString &)
extern "C" Q_DECL_EXPORT
int C_ZNK20QOpenGLShaderProgram17attributeLocationERK7QString(void *this_, QString* name) {
  return (int)((QOpenGLShaderProgram*)this_)->attributeLocation(*name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:166
// [-2] void setAttributeValue(int, GLfloat)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram17setAttributeValueEif(void *this_, int location, GLfloat value) {
  ((QOpenGLShaderProgram*)this_)->setAttributeValue(location, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:167
// [-2] void setAttributeValue(int, GLfloat, GLfloat)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram17setAttributeValueEiff(void *this_, int location, GLfloat x, GLfloat y) {
  ((QOpenGLShaderProgram*)this_)->setAttributeValue(location, x, y);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:168
// [-2] void setAttributeValue(int, GLfloat, GLfloat, GLfloat)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram17setAttributeValueEifff(void *this_, int location, GLfloat x, GLfloat y, GLfloat z) {
  ((QOpenGLShaderProgram*)this_)->setAttributeValue(location, x, y, z);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:169
// [-2] void setAttributeValue(int, GLfloat, GLfloat, GLfloat, GLfloat)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram17setAttributeValueEiffff(void *this_, int location, GLfloat x, GLfloat y, GLfloat z, GLfloat w) {
  ((QOpenGLShaderProgram*)this_)->setAttributeValue(location, x, y, z, w);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:170
// [-2] void setAttributeValue(int, const QVector2D &)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram17setAttributeValueEiRK9QVector2D(void *this_, int location, QVector2D* value) {
  ((QOpenGLShaderProgram*)this_)->setAttributeValue(location, *value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:171
// [-2] void setAttributeValue(int, const QVector3D &)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram17setAttributeValueEiRK9QVector3D(void *this_, int location, QVector3D* value) {
  ((QOpenGLShaderProgram*)this_)->setAttributeValue(location, *value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:172
// [-2] void setAttributeValue(int, const QVector4D &)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram17setAttributeValueEiRK9QVector4D(void *this_, int location, QVector4D* value) {
  ((QOpenGLShaderProgram*)this_)->setAttributeValue(location, *value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:173
// [-2] void setAttributeValue(int, const QColor &)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram17setAttributeValueEiRK6QColor(void *this_, int location, QColor* value) {
  ((QOpenGLShaderProgram*)this_)->setAttributeValue(location, *value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:174
// [-2] void setAttributeValue(int, const GLfloat *, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram17setAttributeValueEiPKfii(void *this_, int location, const GLfloat * values, int columns, int rows) {
  ((QOpenGLShaderProgram*)this_)->setAttributeValue(location, values, columns, rows);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:176
// [-2] void setAttributeValue(const char *, GLfloat)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram17setAttributeValueEPKcf(void *this_, const char * name, GLfloat value) {
  ((QOpenGLShaderProgram*)this_)->setAttributeValue(name, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:177
// [-2] void setAttributeValue(const char *, GLfloat, GLfloat)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram17setAttributeValueEPKcff(void *this_, const char * name, GLfloat x, GLfloat y) {
  ((QOpenGLShaderProgram*)this_)->setAttributeValue(name, x, y);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:178
// [-2] void setAttributeValue(const char *, GLfloat, GLfloat, GLfloat)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram17setAttributeValueEPKcfff(void *this_, const char * name, GLfloat x, GLfloat y, GLfloat z) {
  ((QOpenGLShaderProgram*)this_)->setAttributeValue(name, x, y, z);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:179
// [-2] void setAttributeValue(const char *, GLfloat, GLfloat, GLfloat, GLfloat)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram17setAttributeValueEPKcffff(void *this_, const char * name, GLfloat x, GLfloat y, GLfloat z, GLfloat w) {
  ((QOpenGLShaderProgram*)this_)->setAttributeValue(name, x, y, z, w);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:180
// [-2] void setAttributeValue(const char *, const QVector2D &)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram17setAttributeValueEPKcRK9QVector2D(void *this_, const char * name, QVector2D* value) {
  ((QOpenGLShaderProgram*)this_)->setAttributeValue(name, *value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:181
// [-2] void setAttributeValue(const char *, const QVector3D &)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram17setAttributeValueEPKcRK9QVector3D(void *this_, const char * name, QVector3D* value) {
  ((QOpenGLShaderProgram*)this_)->setAttributeValue(name, *value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:182
// [-2] void setAttributeValue(const char *, const QVector4D &)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram17setAttributeValueEPKcRK9QVector4D(void *this_, const char * name, QVector4D* value) {
  ((QOpenGLShaderProgram*)this_)->setAttributeValue(name, *value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:183
// [-2] void setAttributeValue(const char *, const QColor &)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram17setAttributeValueEPKcRK6QColor(void *this_, const char * name, QColor* value) {
  ((QOpenGLShaderProgram*)this_)->setAttributeValue(name, *value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:184
// [-2] void setAttributeValue(const char *, const GLfloat *, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram17setAttributeValueEPKcPKfii(void *this_, const char * name, const GLfloat * values, int columns, int rows) {
  ((QOpenGLShaderProgram*)this_)->setAttributeValue(name, values, columns, rows);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:186
// [-2] void setAttributeArray(int, const GLfloat *, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram17setAttributeArrayEiPKfii(void *this_, int location, const GLfloat * values, int tupleSize, int stride) {
  ((QOpenGLShaderProgram*)this_)->setAttributeArray(location, values, tupleSize, stride);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:188
// [-2] void setAttributeArray(int, const QVector2D *, int)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram17setAttributeArrayEiPK9QVector2Di(void *this_, int location, const QVector2D * values, int stride) {
  ((QOpenGLShaderProgram*)this_)->setAttributeArray(location, values, stride);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:190
// [-2] void setAttributeArray(int, const QVector3D *, int)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram17setAttributeArrayEiPK9QVector3Di(void *this_, int location, const QVector3D * values, int stride) {
  ((QOpenGLShaderProgram*)this_)->setAttributeArray(location, values, stride);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:192
// [-2] void setAttributeArray(int, const QVector4D *, int)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram17setAttributeArrayEiPK9QVector4Di(void *this_, int location, const QVector4D * values, int stride) {
  ((QOpenGLShaderProgram*)this_)->setAttributeArray(location, values, stride);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:194
// [-2] void setAttributeArray(int, GLenum, const void *, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram17setAttributeArrayEijPKvii(void *this_, int location, GLenum type_, const void * values, int tupleSize, int stride) {
  ((QOpenGLShaderProgram*)this_)->setAttributeArray(location, type_, values, tupleSize, stride);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:196
// [-2] void setAttributeArray(const char *, const GLfloat *, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram17setAttributeArrayEPKcPKfii(void *this_, const char * name, const GLfloat * values, int tupleSize, int stride) {
  ((QOpenGLShaderProgram*)this_)->setAttributeArray(name, values, tupleSize, stride);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:198
// [-2] void setAttributeArray(const char *, const QVector2D *, int)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram17setAttributeArrayEPKcPK9QVector2Di(void *this_, const char * name, const QVector2D * values, int stride) {
  ((QOpenGLShaderProgram*)this_)->setAttributeArray(name, values, stride);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:200
// [-2] void setAttributeArray(const char *, const QVector3D *, int)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram17setAttributeArrayEPKcPK9QVector3Di(void *this_, const char * name, const QVector3D * values, int stride) {
  ((QOpenGLShaderProgram*)this_)->setAttributeArray(name, values, stride);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:202
// [-2] void setAttributeArray(const char *, const QVector4D *, int)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram17setAttributeArrayEPKcPK9QVector4Di(void *this_, const char * name, const QVector4D * values, int stride) {
  ((QOpenGLShaderProgram*)this_)->setAttributeArray(name, values, stride);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:204
// [-2] void setAttributeArray(const char *, GLenum, const void *, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram17setAttributeArrayEPKcjPKvii(void *this_, const char * name, GLenum type_, const void * values, int tupleSize, int stride) {
  ((QOpenGLShaderProgram*)this_)->setAttributeArray(name, type_, values, tupleSize, stride);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:207
// [-2] void setAttributeBuffer(int, GLenum, int, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram18setAttributeBufferEijiii(void *this_, int location, GLenum type_, int offset, int tupleSize, int stride) {
  ((QOpenGLShaderProgram*)this_)->setAttributeBuffer(location, type_, offset, tupleSize, stride);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:209
// [-2] void setAttributeBuffer(const char *, GLenum, int, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram18setAttributeBufferEPKcjiii(void *this_, const char * name, GLenum type_, int offset, int tupleSize, int stride) {
  ((QOpenGLShaderProgram*)this_)->setAttributeBuffer(name, type_, offset, tupleSize, stride);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:212
// [-2] void enableAttributeArray(int)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram20enableAttributeArrayEi(void *this_, int location) {
  ((QOpenGLShaderProgram*)this_)->enableAttributeArray(location);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:213
// [-2] void enableAttributeArray(const char *)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram20enableAttributeArrayEPKc(void *this_, const char * name) {
  ((QOpenGLShaderProgram*)this_)->enableAttributeArray(name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:214
// [-2] void disableAttributeArray(int)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram21disableAttributeArrayEi(void *this_, int location) {
  ((QOpenGLShaderProgram*)this_)->disableAttributeArray(location);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:215
// [-2] void disableAttributeArray(const char *)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram21disableAttributeArrayEPKc(void *this_, const char * name) {
  ((QOpenGLShaderProgram*)this_)->disableAttributeArray(name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:217
// [4] int uniformLocation(const char *)
extern "C" Q_DECL_EXPORT
int C_ZNK20QOpenGLShaderProgram15uniformLocationEPKc(void *this_, const char * name) {
  return (int)((QOpenGLShaderProgram*)this_)->uniformLocation(name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:218
// [4] int uniformLocation(const QByteArray &)
extern "C" Q_DECL_EXPORT
int C_ZNK20QOpenGLShaderProgram15uniformLocationERK10QByteArray(void *this_, QByteArray* name) {
  return (int)((QOpenGLShaderProgram*)this_)->uniformLocation(*name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:219
// [4] int uniformLocation(const QString &)
extern "C" Q_DECL_EXPORT
int C_ZNK20QOpenGLShaderProgram15uniformLocationERK7QString(void *this_, QString* name) {
  return (int)((QOpenGLShaderProgram*)this_)->uniformLocation(*name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:221
// [-2] void setUniformValue(int, GLfloat)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram15setUniformValueEif(void *this_, int location, GLfloat value) {
  ((QOpenGLShaderProgram*)this_)->setUniformValue(location, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:222
// [-2] void setUniformValue(int, GLint)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram15setUniformValueEii(void *this_, int location, GLint value) {
  ((QOpenGLShaderProgram*)this_)->setUniformValue(location, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:223
// [-2] void setUniformValue(int, GLuint)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram15setUniformValueEij(void *this_, int location, GLuint value) {
  ((QOpenGLShaderProgram*)this_)->setUniformValue(location, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:224
// [-2] void setUniformValue(int, GLfloat, GLfloat)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram15setUniformValueEiff(void *this_, int location, GLfloat x, GLfloat y) {
  ((QOpenGLShaderProgram*)this_)->setUniformValue(location, x, y);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:225
// [-2] void setUniformValue(int, GLfloat, GLfloat, GLfloat)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram15setUniformValueEifff(void *this_, int location, GLfloat x, GLfloat y, GLfloat z) {
  ((QOpenGLShaderProgram*)this_)->setUniformValue(location, x, y, z);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:226
// [-2] void setUniformValue(int, GLfloat, GLfloat, GLfloat, GLfloat)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram15setUniformValueEiffff(void *this_, int location, GLfloat x, GLfloat y, GLfloat z, GLfloat w) {
  ((QOpenGLShaderProgram*)this_)->setUniformValue(location, x, y, z, w);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:227
// [-2] void setUniformValue(int, const QVector2D &)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram15setUniformValueEiRK9QVector2D(void *this_, int location, QVector2D* value) {
  ((QOpenGLShaderProgram*)this_)->setUniformValue(location, *value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:228
// [-2] void setUniformValue(int, const QVector3D &)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram15setUniformValueEiRK9QVector3D(void *this_, int location, QVector3D* value) {
  ((QOpenGLShaderProgram*)this_)->setUniformValue(location, *value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:229
// [-2] void setUniformValue(int, const QVector4D &)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram15setUniformValueEiRK9QVector4D(void *this_, int location, QVector4D* value) {
  ((QOpenGLShaderProgram*)this_)->setUniformValue(location, *value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:230
// [-2] void setUniformValue(int, const QColor &)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram15setUniformValueEiRK6QColor(void *this_, int location, QColor* color) {
  ((QOpenGLShaderProgram*)this_)->setUniformValue(location, *color);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:231
// [-2] void setUniformValue(int, const QPoint &)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram15setUniformValueEiRK6QPoint(void *this_, int location, QPoint* point) {
  ((QOpenGLShaderProgram*)this_)->setUniformValue(location, *point);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:232
// [-2] void setUniformValue(int, const QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram15setUniformValueEiRK7QPointF(void *this_, int location, QPointF* point) {
  ((QOpenGLShaderProgram*)this_)->setUniformValue(location, *point);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:233
// [-2] void setUniformValue(int, const QSize &)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram15setUniformValueEiRK5QSize(void *this_, int location, QSize* size) {
  ((QOpenGLShaderProgram*)this_)->setUniformValue(location, *size);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:234
// [-2] void setUniformValue(int, const QSizeF &)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram15setUniformValueEiRK6QSizeF(void *this_, int location, QSizeF* size) {
  ((QOpenGLShaderProgram*)this_)->setUniformValue(location, *size);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:235
// [-2] void setUniformValue(int, const QMatrix2x2 &)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram15setUniformValueEiRK14QGenericMatrixILi2ELi2EfE(void *this_, int location, const QMatrix2x2 & value) {
  ((QOpenGLShaderProgram*)this_)->setUniformValue(location, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:236
// [-2] void setUniformValue(int, const QMatrix2x3 &)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram15setUniformValueEiRK14QGenericMatrixILi2ELi3EfE(void *this_, int location, const QMatrix2x3 & value) {
  ((QOpenGLShaderProgram*)this_)->setUniformValue(location, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:237
// [-2] void setUniformValue(int, const QMatrix2x4 &)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram15setUniformValueEiRK14QGenericMatrixILi2ELi4EfE(void *this_, int location, const QMatrix2x4 & value) {
  ((QOpenGLShaderProgram*)this_)->setUniformValue(location, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:238
// [-2] void setUniformValue(int, const QMatrix3x2 &)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram15setUniformValueEiRK14QGenericMatrixILi3ELi2EfE(void *this_, int location, const QMatrix3x2 & value) {
  ((QOpenGLShaderProgram*)this_)->setUniformValue(location, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:239
// [-2] void setUniformValue(int, const QMatrix3x3 &)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram15setUniformValueEiRK14QGenericMatrixILi3ELi3EfE(void *this_, int location, const QMatrix3x3 & value) {
  ((QOpenGLShaderProgram*)this_)->setUniformValue(location, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:240
// [-2] void setUniformValue(int, const QMatrix3x4 &)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram15setUniformValueEiRK14QGenericMatrixILi3ELi4EfE(void *this_, int location, const QMatrix3x4 & value) {
  ((QOpenGLShaderProgram*)this_)->setUniformValue(location, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:241
// [-2] void setUniformValue(int, const QMatrix4x2 &)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram15setUniformValueEiRK14QGenericMatrixILi4ELi2EfE(void *this_, int location, const QMatrix4x2 & value) {
  ((QOpenGLShaderProgram*)this_)->setUniformValue(location, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:242
// [-2] void setUniformValue(int, const QMatrix4x3 &)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram15setUniformValueEiRK14QGenericMatrixILi4ELi3EfE(void *this_, int location, const QMatrix4x3 & value) {
  ((QOpenGLShaderProgram*)this_)->setUniformValue(location, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:243
// [-2] void setUniformValue(int, const QMatrix4x4 &)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram15setUniformValueEiRK10QMatrix4x4(void *this_, int location, QMatrix4x4* value) {
  ((QOpenGLShaderProgram*)this_)->setUniformValue(location, *value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:244
// [-2] void setUniformValue(int, const GLfloat (*)[2])
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram15setUniformValueEiPA2_Kf(void *this_, int location, const GLfloat** value) {
  ((QOpenGLShaderProgram*)this_)->setUniformValue(location, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:245
// [-2] void setUniformValue(int, const GLfloat (*)[3])
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram15setUniformValueEiPA3_Kf(void *this_, int location, const GLfloat** value) {
  ((QOpenGLShaderProgram*)this_)->setUniformValue(location, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:246
// [-2] void setUniformValue(int, const GLfloat (*)[4])
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram15setUniformValueEiPA4_Kf(void *this_, int location, const GLfloat** value) {
  ((QOpenGLShaderProgram*)this_)->setUniformValue(location, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:247
// [-2] void setUniformValue(int, const QTransform &)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram15setUniformValueEiRK10QTransform(void *this_, int location, QTransform* value) {
  ((QOpenGLShaderProgram*)this_)->setUniformValue(location, *value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:249
// [-2] void setUniformValue(const char *, GLfloat)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram15setUniformValueEPKcf(void *this_, const char * name, GLfloat value) {
  ((QOpenGLShaderProgram*)this_)->setUniformValue(name, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:250
// [-2] void setUniformValue(const char *, GLint)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram15setUniformValueEPKci(void *this_, const char * name, GLint value) {
  ((QOpenGLShaderProgram*)this_)->setUniformValue(name, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:251
// [-2] void setUniformValue(const char *, GLuint)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram15setUniformValueEPKcj(void *this_, const char * name, GLuint value) {
  ((QOpenGLShaderProgram*)this_)->setUniformValue(name, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:252
// [-2] void setUniformValue(const char *, GLfloat, GLfloat)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram15setUniformValueEPKcff(void *this_, const char * name, GLfloat x, GLfloat y) {
  ((QOpenGLShaderProgram*)this_)->setUniformValue(name, x, y);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:253
// [-2] void setUniformValue(const char *, GLfloat, GLfloat, GLfloat)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram15setUniformValueEPKcfff(void *this_, const char * name, GLfloat x, GLfloat y, GLfloat z) {
  ((QOpenGLShaderProgram*)this_)->setUniformValue(name, x, y, z);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:254
// [-2] void setUniformValue(const char *, GLfloat, GLfloat, GLfloat, GLfloat)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram15setUniformValueEPKcffff(void *this_, const char * name, GLfloat x, GLfloat y, GLfloat z, GLfloat w) {
  ((QOpenGLShaderProgram*)this_)->setUniformValue(name, x, y, z, w);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:255
// [-2] void setUniformValue(const char *, const QVector2D &)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram15setUniformValueEPKcRK9QVector2D(void *this_, const char * name, QVector2D* value) {
  ((QOpenGLShaderProgram*)this_)->setUniformValue(name, *value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:256
// [-2] void setUniformValue(const char *, const QVector3D &)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram15setUniformValueEPKcRK9QVector3D(void *this_, const char * name, QVector3D* value) {
  ((QOpenGLShaderProgram*)this_)->setUniformValue(name, *value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:257
// [-2] void setUniformValue(const char *, const QVector4D &)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram15setUniformValueEPKcRK9QVector4D(void *this_, const char * name, QVector4D* value) {
  ((QOpenGLShaderProgram*)this_)->setUniformValue(name, *value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:258
// [-2] void setUniformValue(const char *, const QColor &)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram15setUniformValueEPKcRK6QColor(void *this_, const char * name, QColor* color) {
  ((QOpenGLShaderProgram*)this_)->setUniformValue(name, *color);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:259
// [-2] void setUniformValue(const char *, const QPoint &)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram15setUniformValueEPKcRK6QPoint(void *this_, const char * name, QPoint* point) {
  ((QOpenGLShaderProgram*)this_)->setUniformValue(name, *point);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:260
// [-2] void setUniformValue(const char *, const QPointF &)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram15setUniformValueEPKcRK7QPointF(void *this_, const char * name, QPointF* point) {
  ((QOpenGLShaderProgram*)this_)->setUniformValue(name, *point);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:261
// [-2] void setUniformValue(const char *, const QSize &)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram15setUniformValueEPKcRK5QSize(void *this_, const char * name, QSize* size) {
  ((QOpenGLShaderProgram*)this_)->setUniformValue(name, *size);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:262
// [-2] void setUniformValue(const char *, const QSizeF &)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram15setUniformValueEPKcRK6QSizeF(void *this_, const char * name, QSizeF* size) {
  ((QOpenGLShaderProgram*)this_)->setUniformValue(name, *size);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:263
// [-2] void setUniformValue(const char *, const QMatrix2x2 &)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram15setUniformValueEPKcRK14QGenericMatrixILi2ELi2EfE(void *this_, const char * name, const QMatrix2x2 & value) {
  ((QOpenGLShaderProgram*)this_)->setUniformValue(name, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:264
// [-2] void setUniformValue(const char *, const QMatrix2x3 &)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram15setUniformValueEPKcRK14QGenericMatrixILi2ELi3EfE(void *this_, const char * name, const QMatrix2x3 & value) {
  ((QOpenGLShaderProgram*)this_)->setUniformValue(name, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:265
// [-2] void setUniformValue(const char *, const QMatrix2x4 &)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram15setUniformValueEPKcRK14QGenericMatrixILi2ELi4EfE(void *this_, const char * name, const QMatrix2x4 & value) {
  ((QOpenGLShaderProgram*)this_)->setUniformValue(name, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:266
// [-2] void setUniformValue(const char *, const QMatrix3x2 &)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram15setUniformValueEPKcRK14QGenericMatrixILi3ELi2EfE(void *this_, const char * name, const QMatrix3x2 & value) {
  ((QOpenGLShaderProgram*)this_)->setUniformValue(name, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:267
// [-2] void setUniformValue(const char *, const QMatrix3x3 &)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram15setUniformValueEPKcRK14QGenericMatrixILi3ELi3EfE(void *this_, const char * name, const QMatrix3x3 & value) {
  ((QOpenGLShaderProgram*)this_)->setUniformValue(name, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:268
// [-2] void setUniformValue(const char *, const QMatrix3x4 &)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram15setUniformValueEPKcRK14QGenericMatrixILi3ELi4EfE(void *this_, const char * name, const QMatrix3x4 & value) {
  ((QOpenGLShaderProgram*)this_)->setUniformValue(name, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:269
// [-2] void setUniformValue(const char *, const QMatrix4x2 &)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram15setUniformValueEPKcRK14QGenericMatrixILi4ELi2EfE(void *this_, const char * name, const QMatrix4x2 & value) {
  ((QOpenGLShaderProgram*)this_)->setUniformValue(name, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:270
// [-2] void setUniformValue(const char *, const QMatrix4x3 &)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram15setUniformValueEPKcRK14QGenericMatrixILi4ELi3EfE(void *this_, const char * name, const QMatrix4x3 & value) {
  ((QOpenGLShaderProgram*)this_)->setUniformValue(name, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:271
// [-2] void setUniformValue(const char *, const QMatrix4x4 &)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram15setUniformValueEPKcRK10QMatrix4x4(void *this_, const char * name, QMatrix4x4* value) {
  ((QOpenGLShaderProgram*)this_)->setUniformValue(name, *value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:272
// [-2] void setUniformValue(const char *, const GLfloat (*)[2])
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram15setUniformValueEPKcPA2_Kf(void *this_, const char * name, const GLfloat** value) {
  ((QOpenGLShaderProgram*)this_)->setUniformValue(name, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:273
// [-2] void setUniformValue(const char *, const GLfloat (*)[3])
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram15setUniformValueEPKcPA3_Kf(void *this_, const char * name, const GLfloat** value) {
  ((QOpenGLShaderProgram*)this_)->setUniformValue(name, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:274
// [-2] void setUniformValue(const char *, const GLfloat (*)[4])
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram15setUniformValueEPKcPA4_Kf(void *this_, const char * name, const GLfloat** value) {
  ((QOpenGLShaderProgram*)this_)->setUniformValue(name, value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:275
// [-2] void setUniformValue(const char *, const QTransform &)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram15setUniformValueEPKcRK10QTransform(void *this_, const char * name, QTransform* value) {
  ((QOpenGLShaderProgram*)this_)->setUniformValue(name, *value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:277
// [-2] void setUniformValueArray(int, const GLfloat *, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram20setUniformValueArrayEiPKfii(void *this_, int location, const GLfloat * values, int count, int tupleSize) {
  ((QOpenGLShaderProgram*)this_)->setUniformValueArray(location, values, count, tupleSize);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:278
// [-2] void setUniformValueArray(int, const GLint *, int)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram20setUniformValueArrayEiPKii(void *this_, int location, const GLint * values, int count) {
  ((QOpenGLShaderProgram*)this_)->setUniformValueArray(location, values, count);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:279
// [-2] void setUniformValueArray(int, const GLuint *, int)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram20setUniformValueArrayEiPKji(void *this_, int location, const GLuint * values, int count) {
  ((QOpenGLShaderProgram*)this_)->setUniformValueArray(location, values, count);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:280
// [-2] void setUniformValueArray(int, const QVector2D *, int)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram20setUniformValueArrayEiPK9QVector2Di(void *this_, int location, const QVector2D * values, int count) {
  ((QOpenGLShaderProgram*)this_)->setUniformValueArray(location, values, count);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:281
// [-2] void setUniformValueArray(int, const QVector3D *, int)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram20setUniformValueArrayEiPK9QVector3Di(void *this_, int location, const QVector3D * values, int count) {
  ((QOpenGLShaderProgram*)this_)->setUniformValueArray(location, values, count);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:282
// [-2] void setUniformValueArray(int, const QVector4D *, int)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram20setUniformValueArrayEiPK9QVector4Di(void *this_, int location, const QVector4D * values, int count) {
  ((QOpenGLShaderProgram*)this_)->setUniformValueArray(location, values, count);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:283
// [-2] void setUniformValueArray(int, const QMatrix2x2 *, int)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram20setUniformValueArrayEiPK14QGenericMatrixILi2ELi2EfEi(void *this_, int location, const QMatrix2x2 * values, int count) {
  ((QOpenGLShaderProgram*)this_)->setUniformValueArray(location, values, count);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:284
// [-2] void setUniformValueArray(int, const QMatrix2x3 *, int)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram20setUniformValueArrayEiPK14QGenericMatrixILi2ELi3EfEi(void *this_, int location, const QMatrix2x3 * values, int count) {
  ((QOpenGLShaderProgram*)this_)->setUniformValueArray(location, values, count);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:285
// [-2] void setUniformValueArray(int, const QMatrix2x4 *, int)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram20setUniformValueArrayEiPK14QGenericMatrixILi2ELi4EfEi(void *this_, int location, const QMatrix2x4 * values, int count) {
  ((QOpenGLShaderProgram*)this_)->setUniformValueArray(location, values, count);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:286
// [-2] void setUniformValueArray(int, const QMatrix3x2 *, int)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram20setUniformValueArrayEiPK14QGenericMatrixILi3ELi2EfEi(void *this_, int location, const QMatrix3x2 * values, int count) {
  ((QOpenGLShaderProgram*)this_)->setUniformValueArray(location, values, count);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:287
// [-2] void setUniformValueArray(int, const QMatrix3x3 *, int)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram20setUniformValueArrayEiPK14QGenericMatrixILi3ELi3EfEi(void *this_, int location, const QMatrix3x3 * values, int count) {
  ((QOpenGLShaderProgram*)this_)->setUniformValueArray(location, values, count);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:288
// [-2] void setUniformValueArray(int, const QMatrix3x4 *, int)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram20setUniformValueArrayEiPK14QGenericMatrixILi3ELi4EfEi(void *this_, int location, const QMatrix3x4 * values, int count) {
  ((QOpenGLShaderProgram*)this_)->setUniformValueArray(location, values, count);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:289
// [-2] void setUniformValueArray(int, const QMatrix4x2 *, int)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram20setUniformValueArrayEiPK14QGenericMatrixILi4ELi2EfEi(void *this_, int location, const QMatrix4x2 * values, int count) {
  ((QOpenGLShaderProgram*)this_)->setUniformValueArray(location, values, count);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:290
// [-2] void setUniformValueArray(int, const QMatrix4x3 *, int)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram20setUniformValueArrayEiPK14QGenericMatrixILi4ELi3EfEi(void *this_, int location, const QMatrix4x3 * values, int count) {
  ((QOpenGLShaderProgram*)this_)->setUniformValueArray(location, values, count);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:291
// [-2] void setUniformValueArray(int, const QMatrix4x4 *, int)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram20setUniformValueArrayEiPK10QMatrix4x4i(void *this_, int location, const QMatrix4x4 * values, int count) {
  ((QOpenGLShaderProgram*)this_)->setUniformValueArray(location, values, count);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:293
// [-2] void setUniformValueArray(const char *, const GLfloat *, int, int)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram20setUniformValueArrayEPKcPKfii(void *this_, const char * name, const GLfloat * values, int count, int tupleSize) {
  ((QOpenGLShaderProgram*)this_)->setUniformValueArray(name, values, count, tupleSize);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:294
// [-2] void setUniformValueArray(const char *, const GLint *, int)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram20setUniformValueArrayEPKcPKii(void *this_, const char * name, const GLint * values, int count) {
  ((QOpenGLShaderProgram*)this_)->setUniformValueArray(name, values, count);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:295
// [-2] void setUniformValueArray(const char *, const GLuint *, int)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram20setUniformValueArrayEPKcPKji(void *this_, const char * name, const GLuint * values, int count) {
  ((QOpenGLShaderProgram*)this_)->setUniformValueArray(name, values, count);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:296
// [-2] void setUniformValueArray(const char *, const QVector2D *, int)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram20setUniformValueArrayEPKcPK9QVector2Di(void *this_, const char * name, const QVector2D * values, int count) {
  ((QOpenGLShaderProgram*)this_)->setUniformValueArray(name, values, count);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:297
// [-2] void setUniformValueArray(const char *, const QVector3D *, int)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram20setUniformValueArrayEPKcPK9QVector3Di(void *this_, const char * name, const QVector3D * values, int count) {
  ((QOpenGLShaderProgram*)this_)->setUniformValueArray(name, values, count);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:298
// [-2] void setUniformValueArray(const char *, const QVector4D *, int)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram20setUniformValueArrayEPKcPK9QVector4Di(void *this_, const char * name, const QVector4D * values, int count) {
  ((QOpenGLShaderProgram*)this_)->setUniformValueArray(name, values, count);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:299
// [-2] void setUniformValueArray(const char *, const QMatrix2x2 *, int)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram20setUniformValueArrayEPKcPK14QGenericMatrixILi2ELi2EfEi(void *this_, const char * name, const QMatrix2x2 * values, int count) {
  ((QOpenGLShaderProgram*)this_)->setUniformValueArray(name, values, count);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:300
// [-2] void setUniformValueArray(const char *, const QMatrix2x3 *, int)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram20setUniformValueArrayEPKcPK14QGenericMatrixILi2ELi3EfEi(void *this_, const char * name, const QMatrix2x3 * values, int count) {
  ((QOpenGLShaderProgram*)this_)->setUniformValueArray(name, values, count);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:301
// [-2] void setUniformValueArray(const char *, const QMatrix2x4 *, int)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram20setUniformValueArrayEPKcPK14QGenericMatrixILi2ELi4EfEi(void *this_, const char * name, const QMatrix2x4 * values, int count) {
  ((QOpenGLShaderProgram*)this_)->setUniformValueArray(name, values, count);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:302
// [-2] void setUniformValueArray(const char *, const QMatrix3x2 *, int)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram20setUniformValueArrayEPKcPK14QGenericMatrixILi3ELi2EfEi(void *this_, const char * name, const QMatrix3x2 * values, int count) {
  ((QOpenGLShaderProgram*)this_)->setUniformValueArray(name, values, count);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:303
// [-2] void setUniformValueArray(const char *, const QMatrix3x3 *, int)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram20setUniformValueArrayEPKcPK14QGenericMatrixILi3ELi3EfEi(void *this_, const char * name, const QMatrix3x3 * values, int count) {
  ((QOpenGLShaderProgram*)this_)->setUniformValueArray(name, values, count);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:304
// [-2] void setUniformValueArray(const char *, const QMatrix3x4 *, int)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram20setUniformValueArrayEPKcPK14QGenericMatrixILi3ELi4EfEi(void *this_, const char * name, const QMatrix3x4 * values, int count) {
  ((QOpenGLShaderProgram*)this_)->setUniformValueArray(name, values, count);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:305
// [-2] void setUniformValueArray(const char *, const QMatrix4x2 *, int)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram20setUniformValueArrayEPKcPK14QGenericMatrixILi4ELi2EfEi(void *this_, const char * name, const QMatrix4x2 * values, int count) {
  ((QOpenGLShaderProgram*)this_)->setUniformValueArray(name, values, count);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:306
// [-2] void setUniformValueArray(const char *, const QMatrix4x3 *, int)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram20setUniformValueArrayEPKcPK14QGenericMatrixILi4ELi3EfEi(void *this_, const char * name, const QMatrix4x3 * values, int count) {
  ((QOpenGLShaderProgram*)this_)->setUniformValueArray(name, values, count);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:307
// [-2] void setUniformValueArray(const char *, const QMatrix4x4 *, int)
extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLShaderProgram20setUniformValueArrayEPKcPK10QMatrix4x4i(void *this_, const char * name, const QMatrix4x4 * values, int count) {
  ((QOpenGLShaderProgram*)this_)->setUniformValueArray(name, values, count);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:309
// [1] bool hasOpenGLShaderPrograms(QOpenGLContext *)
extern "C" Q_DECL_EXPORT
bool C_ZN20QOpenGLShaderProgram23hasOpenGLShaderProgramsEP14QOpenGLContext(QOpenGLContext * context) {
  return (bool)QOpenGLShaderProgram::hasOpenGLShaderPrograms(context);
}

//  main block end
