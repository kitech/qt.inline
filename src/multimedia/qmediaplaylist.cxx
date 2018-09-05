//  header block begin
// /usr/include/qt/QtMultimedia/qmediaplaylist.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmediaplaylist.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMediaPlaylist is pure virtual: false
// QMediaPlaylist has virtual projected: true
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQMediaPlaylist_t {
  QByteArrayData data[1];
  char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQMediaPlaylist_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQMediaPlaylist_t qt_meta_stringdata_MyQMediaPlaylist = {
   {
  QT_MOC_LITERAL(0, 0, 16), // "MyQMediaPlaylist"
  },
  "MyQMediaPlaylist"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQMediaPlaylist[] = {
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
class Q_DECL_EXPORT MyQMediaPlaylist : public QMediaPlaylist {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QMediaPlaylist::staticMetaObject,
  qt_meta_stringdata_MyQMediaPlaylist.data,
  qt_meta_data_MyQMediaPlaylist,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQMediaPlaylist.stringdata0))
      return static_cast<void*>(this);
  return QMediaPlaylist::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QMediaPlaylist::qt_metacall(_c, _id, _a);
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
  virtual ~MyQMediaPlaylist() {}
// void QMediaPlaylist(QObject *)
MyQMediaPlaylist(QObject * parent) : QMediaPlaylist(parent) {}
// Protected virtual Visibility=Default Availability=Available
// [1] bool setMediaObject(QMediaObject *)
  virtual bool setMediaObject(QMediaObject * object)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setMediaObject", &handled, 1, (uint64_t)object, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return QMediaPlaylist::setMediaObject(object);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QMediaPlaylist_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQMediaPlaylist* qo = (MyQMediaPlaylist*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplaylist.h:132
// [1] bool setMediaObject(QMediaObject *)
extern "C" Q_DECL_EXPORT
bool C_ZN14QMediaPlaylist14setMediaObjectEP12QMediaObject(void *this_, QMediaObject * object) {
  return (bool)((QMediaPlaylist*)this_)->QMediaPlaylist::setMediaObject(object);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplaylist.h:59
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QMediaPlaylist10metaObjectEv(void *this_) {
  return (void*)((QMediaPlaylist*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplaylist.h:59
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN14QMediaPlaylist11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QMediaPlaylist*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplaylist.h:59
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN14QMediaPlaylist11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QMediaPlaylist*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplaylist.h:59
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN14QMediaPlaylist2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QMediaPlaylist::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplaylist.h:59
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN14QMediaPlaylist6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QMediaPlaylist::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplaylist.h:70
// [-2] void QMediaPlaylist(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN14QMediaPlaylistC2EP7QObject(QObject * parent) {
  auto _nilp = (MyQMediaPlaylist*)(0);
  return  new MyQMediaPlaylist(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplaylist.h:71
// [-2] void ~QMediaPlaylist()
extern "C" Q_DECL_EXPORT
void C_ZN14QMediaPlaylistD2Ev(void *this_) {
  delete (QMediaPlaylist*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplaylist.h:73
// [8] QMediaObject * mediaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QMediaPlaylist11mediaObjectEv(void *this_) {
  return (void*)((QMediaPlaylist*)this_)->mediaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplaylist.h:75
// [4] QMediaPlaylist::PlaybackMode playbackMode()
extern "C" Q_DECL_EXPORT
QMediaPlaylist::PlaybackMode C_ZNK14QMediaPlaylist12playbackModeEv(void *this_) {
  return (QMediaPlaylist::PlaybackMode)((QMediaPlaylist*)this_)->playbackMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplaylist.h:76
// [-2] void setPlaybackMode(QMediaPlaylist::PlaybackMode)
extern "C" Q_DECL_EXPORT
void C_ZN14QMediaPlaylist15setPlaybackModeENS_12PlaybackModeE(void *this_, QMediaPlaylist::PlaybackMode mode) {
  ((QMediaPlaylist*)this_)->setPlaybackMode(mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplaylist.h:78
// [4] int currentIndex()
extern "C" Q_DECL_EXPORT
int C_ZNK14QMediaPlaylist12currentIndexEv(void *this_) {
  return (int)((QMediaPlaylist*)this_)->currentIndex();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplaylist.h:79
// [8] QMediaContent currentMedia()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QMediaPlaylist12currentMediaEv(void *this_) {
  auto rv = ((QMediaPlaylist*)this_)->currentMedia();
return new QMediaContent(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplaylist.h:81
// [4] int nextIndex(int)
extern "C" Q_DECL_EXPORT
int C_ZNK14QMediaPlaylist9nextIndexEi(void *this_, int steps) {
  return (int)((QMediaPlaylist*)this_)->nextIndex(steps);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplaylist.h:82
// [4] int previousIndex(int)
extern "C" Q_DECL_EXPORT
int C_ZNK14QMediaPlaylist13previousIndexEi(void *this_, int steps) {
  return (int)((QMediaPlaylist*)this_)->previousIndex(steps);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplaylist.h:84
// [8] QMediaContent media(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK14QMediaPlaylist5mediaEi(void *this_, int index) {
  auto rv = ((QMediaPlaylist*)this_)->media(index);
return new QMediaContent(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplaylist.h:86
// [4] int mediaCount()
extern "C" Q_DECL_EXPORT
int C_ZNK14QMediaPlaylist10mediaCountEv(void *this_) {
  return (int)((QMediaPlaylist*)this_)->mediaCount();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplaylist.h:87
// [1] bool isEmpty()
extern "C" Q_DECL_EXPORT
bool C_ZNK14QMediaPlaylist7isEmptyEv(void *this_) {
  return (bool)((QMediaPlaylist*)this_)->isEmpty();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplaylist.h:88
// [1] bool isReadOnly()
extern "C" Q_DECL_EXPORT
bool C_ZNK14QMediaPlaylist10isReadOnlyEv(void *this_) {
  return (bool)((QMediaPlaylist*)this_)->isReadOnly();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplaylist.h:90
// [1] bool addMedia(const QMediaContent &)
extern "C" Q_DECL_EXPORT
bool C_ZN14QMediaPlaylist8addMediaERK13QMediaContent(void *this_, QMediaContent* content) {
  return (bool)((QMediaPlaylist*)this_)->addMedia(*content);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplaylist.h:91
// [1] bool addMedia(const QList<QMediaContent> &)
extern "C" Q_DECL_EXPORT
bool C_ZN14QMediaPlaylist8addMediaERK5QListI13QMediaContentE(void *this_, QList<QMediaContent>* items) {
  return (bool)((QMediaPlaylist*)this_)->addMedia(*items);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplaylist.h:92
// [1] bool insertMedia(int, const QMediaContent &)
extern "C" Q_DECL_EXPORT
bool C_ZN14QMediaPlaylist11insertMediaEiRK13QMediaContent(void *this_, int index, QMediaContent* content) {
  return (bool)((QMediaPlaylist*)this_)->insertMedia(index, *content);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplaylist.h:93
// [1] bool insertMedia(int, const QList<QMediaContent> &)
extern "C" Q_DECL_EXPORT
bool C_ZN14QMediaPlaylist11insertMediaEiRK5QListI13QMediaContentE(void *this_, int index, QList<QMediaContent>* items) {
  return (bool)((QMediaPlaylist*)this_)->insertMedia(index, *items);
}

// Public Visibility=Default Availability=Available
// since 5.7
// /usr/include/qt/QtMultimedia/qmediaplaylist.h:94
// [1] bool moveMedia(int, int)
#if QT_VERSION >= 0x050700
extern "C" Q_DECL_EXPORT
bool C_ZN14QMediaPlaylist9moveMediaEii(void *this_, int from, int to) {
  return (bool)((QMediaPlaylist*)this_)->moveMedia(from, to);
}
#endif // QT_VERSION >= 0x050700

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplaylist.h:95
// [1] bool removeMedia(int)
extern "C" Q_DECL_EXPORT
bool C_ZN14QMediaPlaylist11removeMediaEi(void *this_, int pos) {
  return (bool)((QMediaPlaylist*)this_)->removeMedia(pos);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplaylist.h:96
// [1] bool removeMedia(int, int)
extern "C" Q_DECL_EXPORT
bool C_ZN14QMediaPlaylist11removeMediaEii(void *this_, int start, int end_) {
  return (bool)((QMediaPlaylist*)this_)->removeMedia(start, end_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplaylist.h:97
// [1] bool clear()
extern "C" Q_DECL_EXPORT
bool C_ZN14QMediaPlaylist5clearEv(void *this_) {
  return (bool)((QMediaPlaylist*)this_)->clear();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplaylist.h:99
// [-2] void load(const QNetworkRequest &, const char *)
extern "C" Q_DECL_EXPORT
void C_ZN14QMediaPlaylist4loadERK15QNetworkRequestPKc(void *this_, QNetworkRequest* request, const char * format) {
  ((QMediaPlaylist*)this_)->load(*request, format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplaylist.h:100
// [-2] void load(const QUrl &, const char *)
extern "C" Q_DECL_EXPORT
void C_ZN14QMediaPlaylist4loadERK4QUrlPKc(void *this_, QUrl* location, const char * format) {
  ((QMediaPlaylist*)this_)->load(*location, format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplaylist.h:101
// [-2] void load(QIODevice *, const char *)
extern "C" Q_DECL_EXPORT
void C_ZN14QMediaPlaylist4loadEP9QIODevicePKc(void *this_, QIODevice * device, const char * format) {
  ((QMediaPlaylist*)this_)->load(device, format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplaylist.h:103
// [1] bool save(const QUrl &, const char *)
extern "C" Q_DECL_EXPORT
bool C_ZN14QMediaPlaylist4saveERK4QUrlPKc(void *this_, QUrl* location, const char * format) {
  return (bool)((QMediaPlaylist*)this_)->save(*location, format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplaylist.h:104
// [1] bool save(QIODevice *, const char *)
extern "C" Q_DECL_EXPORT
bool C_ZN14QMediaPlaylist4saveEP9QIODevicePKc(void *this_, QIODevice * device, const char * format) {
  return (bool)((QMediaPlaylist*)this_)->save(device, format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplaylist.h:106
// [4] QMediaPlaylist::Error error()
extern "C" Q_DECL_EXPORT
QMediaPlaylist::Error C_ZNK14QMediaPlaylist5errorEv(void *this_) {
  return (QMediaPlaylist::Error)((QMediaPlaylist*)this_)->error();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplaylist.h:107
// [8] QString errorString()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QMediaPlaylist11errorStringEv(void *this_) {
  auto rv = ((QMediaPlaylist*)this_)->errorString();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplaylist.h:110
// [-2] void shuffle()
extern "C" Q_DECL_EXPORT
void C_ZN14QMediaPlaylist7shuffleEv(void *this_) {
  ((QMediaPlaylist*)this_)->shuffle();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplaylist.h:112
// [-2] void next()
extern "C" Q_DECL_EXPORT
void C_ZN14QMediaPlaylist4nextEv(void *this_) {
  ((QMediaPlaylist*)this_)->next();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplaylist.h:113
// [-2] void previous()
extern "C" Q_DECL_EXPORT
void C_ZN14QMediaPlaylist8previousEv(void *this_) {
  ((QMediaPlaylist*)this_)->previous();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplaylist.h:115
// [-2] void setCurrentIndex(int)
extern "C" Q_DECL_EXPORT
void C_ZN14QMediaPlaylist15setCurrentIndexEi(void *this_, int index) {
  ((QMediaPlaylist*)this_)->setCurrentIndex(index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplaylist.h:118
// [-2] void currentIndexChanged(int)
extern "C" Q_DECL_EXPORT
void C_ZN14QMediaPlaylist19currentIndexChangedEi(void *this_, int index) {
  ((QMediaPlaylist*)this_)->currentIndexChanged(index);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplaylist.h:119
// [-2] void playbackModeChanged(QMediaPlaylist::PlaybackMode)
extern "C" Q_DECL_EXPORT
void C_ZN14QMediaPlaylist19playbackModeChangedENS_12PlaybackModeE(void *this_, QMediaPlaylist::PlaybackMode mode) {
  ((QMediaPlaylist*)this_)->playbackModeChanged(mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplaylist.h:120
// [-2] void currentMediaChanged(const QMediaContent &)
extern "C" Q_DECL_EXPORT
void C_ZN14QMediaPlaylist19currentMediaChangedERK13QMediaContent(void *this_, QMediaContent* arg0) {
  ((QMediaPlaylist*)this_)->currentMediaChanged(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplaylist.h:122
// [-2] void mediaAboutToBeInserted(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN14QMediaPlaylist22mediaAboutToBeInsertedEii(void *this_, int start, int end_) {
  ((QMediaPlaylist*)this_)->mediaAboutToBeInserted(start, end_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplaylist.h:123
// [-2] void mediaInserted(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN14QMediaPlaylist13mediaInsertedEii(void *this_, int start, int end_) {
  ((QMediaPlaylist*)this_)->mediaInserted(start, end_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplaylist.h:124
// [-2] void mediaAboutToBeRemoved(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN14QMediaPlaylist21mediaAboutToBeRemovedEii(void *this_, int start, int end_) {
  ((QMediaPlaylist*)this_)->mediaAboutToBeRemoved(start, end_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplaylist.h:125
// [-2] void mediaRemoved(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN14QMediaPlaylist12mediaRemovedEii(void *this_, int start, int end_) {
  ((QMediaPlaylist*)this_)->mediaRemoved(start, end_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplaylist.h:126
// [-2] void mediaChanged(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN14QMediaPlaylist12mediaChangedEii(void *this_, int start, int end_) {
  ((QMediaPlaylist*)this_)->mediaChanged(start, end_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplaylist.h:128
// [-2] void loaded()
extern "C" Q_DECL_EXPORT
void C_ZN14QMediaPlaylist6loadedEv(void *this_) {
  ((QMediaPlaylist*)this_)->loaded();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplaylist.h:129
// [-2] void loadFailed()
extern "C" Q_DECL_EXPORT
void C_ZN14QMediaPlaylist10loadFailedEv(void *this_) {
  ((QMediaPlaylist*)this_)->loadFailed();
}

//  main block end
