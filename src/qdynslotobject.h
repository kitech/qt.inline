#ifndef _QDynSlotObject_H_
#define _QDynSlotObject_H_

#include <QObject>


class QDynSlotObject : public QObject
{
    // Q_OBJECT
 public:
    QMetaObject staticMetaObject;
    virtual const QMetaObject *metaObject() const;
    virtual void *qt_metacast(const char *);
    virtual int qt_metacall(QMetaObject::Call, int, void **);
    static inline QString tr(const char *s, const char *c = nullptr, int n = -1)
    { return QObject::staticMetaObject.tr(s, c, n); }
    static inline QString trUtf8(const char *s, const char *c = nullptr, int n = -1)
    { return QObject::staticMetaObject.tr(s, c, n); }
 private:
    __attribute__((visibility("hidden"))) static void qt_static_metacall(QObject *, QMetaObject::Call, int, void **);
    struct QPrivateSignal {};

 public:
    QDynSlotObject(void *fnptr, char* name, int argc, int*argtys, void* cbptr);
    virtual ~QDynSlotObject();
    void setCallbackSlot(void *fnptr, char* name, int argc, int*argtys, void* cbptr);

    void (*fnptr_)(QObject*, int, int, void*, char*name, int argc, int*argtys, void*cbptr) = 0;
    char* name_;
    int argc_;
    int* argtys_;
    void*cbptr_;

 public:
    ///
    struct qt_meta_stringdata_QDynSlotObject_t {
        QByteArrayData data[3];
        char stringdata0[128];  // classname123\0firstslotname\0\0
    };

#define _QT_MOC_LITERAL_TMP(idx, ofs, len)                              \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len,        \
    qptrdiff(offsetof(qt_meta_stringdata_QDynSlotObject_t, stringdata0) + ofs \
             - idx * sizeof(QByteArrayData))                            \
     )

    // see https://github.com/qt/qtbase/commit/4a1a13a81b7e4b8f3d159f7a9b78f93c0a4eca66#diff-6c39b309cf5d72e6213118afd460ce82
    // last update format number is 67, over 5 years
    struct qt_meta_stringdata_QDynSlotObject_t qt_meta_stringdata = {
        {
            _QT_MOC_LITERAL_TMP(0, 0, 30), // "QDemoObject"
            _QT_MOC_LITERAL_TMP(1, 31, 9), // "dummyslot"
            _QT_MOC_LITERAL_TMP(2, 41, 0) // ""
        },
        "QDynSlotObject0123456789ABCDEF\0dumnyslot\0"
        // uint64的object编号
        };
#undef _QT_MOC_LITERAL_TMP

    uint qt_meta_data[128] = {
        // content:
        7,       // revision
        0,       // classname
        0,    0, // classinfo
        1,   14, // methods
        0,    0, // properties
        0,    0, // enums/sets
        0,    0, // constructors
        0,       // flags
        0,       // signalCount

        // slots: name, argc, parameters, tag, flags
        1,    0,   19,    2, 0x0a /* Public */,

        // slots: parameters
        QMetaType::Void,

        0        // eod
    };
};

// TODO 放在qt.inline项目中吧，
// 注意，尽量避免链接进进程，尽量使用ffi_call
#ifdef __cplusplus
extern "C"{
#endif
    QDynSlotObject* QDynSlotObject_new(void *fnptr, char* name, int argc, int*argtys, void* cbptr);
    void QDynSlotObject_delete(QDynSlotObject*o);
    void QDynSlotObject_connect_switch(QObject*src, char*signature, QDynSlotObject*me, int on);
    void QDynSlotObject_connect_test(QObject*ofrom, QObject*oto);
    void QDynSlotObject_trigger_test(QObject*osrc);
    void QDynSlotObject_set_debug(int on);

    uint64_t QObject_get_meta_signature_by_name(void*qobj, char* name);
#ifdef __cplusplus
};
#endif

#endif


