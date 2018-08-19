//  header block begin
// /usr/include/qt/QtCore/qabstractitemmodel.h
#ifndef protected
#define protected public
#endif
#include <qabstractitemmodel.h>
#include <QtCore>
#include <QtQml>
#include "callback_inherit.h"

// QAbstractListModel is pure virtual: false
// QAbstractListModel has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT QGoListModel : public QAbstractListModel {
    Q_OBJECT;
    Q_PROPERTY(QString typeName READ getTypeName WRITE setTypeName);
public:
    ////////
    QString typeName;
    inline QString getTypeName() const { return typeName; }
    inline void setTypeName(const QString& tyname) { typeName = tyname; }

    ////////
    virtual int rowCount(const QModelIndex &parent = QModelIndex()) const override {
        this->chkidornew();
        int handled = 0;
        auto irv = callbackAllInherits_fnptr((void*)this, (char*)"rowCount", &handled, 1, (uint64_t)&parent, 0, 0, 0, 0, 0, 0, 0, 0, 0);
        return int(irv);
    }
    virtual QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override {
        this->chkidornew();
        int handled = 0;
        auto irv = callbackAllInherits_fnptr((void*)this, (char*)"data", &handled, 2, (uint64_t)&index, role, 0, 0, 0, 0, 0, 0, 0, 0);

        QVariant* retvalp = (QVariant*)(void*)irv;
        QVariant retval(*retvalp);
        delete (retvalp);
        return retval;
    }
    ////////
    QModelIndex index(int row, int column = 0, const QModelIndex &parent = QModelIndex()) const override {
        this->chkidornew();
        int handled = 0;
        auto irv = callbackAllInherits_fnptr((void*)this, (char*)"index", &handled, 3, row, column, (uint64_t)&parent, 0, 0, 0, 0, 0, 0, 0);

        return this->createIndex(row, column);
    }
    QModelIndex sibling(int row, int column, const QModelIndex &idx) const override {
        this->chkidornew();
        int handled = 0;
        auto irv = callbackAllInherits_fnptr((void*)this, (char*)"sibling", &handled, 3, row, column, (uint64_t)&idx, 0, 0, 0, 0, 0, 0, 0);
        return QModelIndex();
    }
    bool dropMimeData(const QMimeData *data, Qt::DropAction action,
                      int row, int column, const QModelIndex &parent) override {
        this->chkidornew();
        int handled = 0;
        auto irv = callbackAllInherits_fnptr((void*)this, (char*)"dropMimeData", &handled, 5,
                                             (uint64_t)data, (uint64_t)action, row, column, (uint64_t)&parent, 0, 0, 0, 0, 0);
        return irv == 1;
    }

    Qt::ItemFlags flags(const QModelIndex &index) const override {
        this->chkidornew();
        int handled = 0;
        auto irv = callbackAllInherits_fnptr((void*)this, (char*)"flags", &handled, 1, (uint64_t)&index, 0, 0, 0, 0, 0, 0, 0, 0, 0);
        return (Qt::ItemFlags)(int)(irv);
    }

    // return the roles mapping to be used by QML
    virtual QHash<int, QByteArray> roleNames() const override {
        this->chkidornew();
        int handled = 0;
        auto irv = callbackAllInherits_fnptr((void*)this, (char*)"roleNames", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);

        char* jsdat =(char*)(void*)irv;
        QJsonParseError json_error;
        QJsonDocument jsdoc = QJsonDocument::fromJson(QByteArray(jsdat), &json_error);
        QJsonObject jsobj = jsdoc.object();
        QHash<int, QByteArray> roles;
        foreach (QString key , jsobj.keys()) {
            auto ival = jsobj.value(key).toInt();
            roles[ival] = key.toUtf8();
        }
        free(jsdat);
        return roles;
    }

    ////////
    uint64_t gomdlid = 0;
    void chkidornew() const { if (gomdlid==0 && !typeName.isEmpty()) {
            int handled = 0;
            uint64_t arg0 = (uint64_t)(void*)this;
            uint64_t arg1 = (uint64_t)(void*)this->typeName.toUtf8().data();
            auto irv = callbackAllInherits_fnptr(0, (char*)"NewGoListModel", &handled, 2, arg0, arg1, 0, 0, 0, 0, 0, 0, 0, 0);
            // gomdlid = (uint64_t)irv;
            memcpy((void*)&gomdlid, &irv, sizeof(uint64_t));
        } }

    virtual ~QGoListModel() {
      if (gomdlid!=0 && !typeName.isEmpty()) {
          int handled = 0;
          uint64_t arg0 = (uint64_t)(void*)this;
          uint64_t arg1 = (uint64_t)(void*)this->typeName.toUtf8().data();
          auto irv = callbackAllInherits_fnptr(0, (char*)"DeleteGoListModel", &handled, 3, arg0, arg1, gomdlid, 0, 0, 0, 0, 0, 0, 0);
      }
  }
// void QAbstractListModel(QObject *)
QGoListModel(QObject * parent = nullptr) : QAbstractListModel(parent) {}
};

#if !defined(QT_INIT_METAOBJECT)
#if defined(Q_CC_GNU) && defined(Q_OS_WIN)
#  define QT_INIT_METAOBJECT __attribute__((init_priority(101)))
#else
#  define QT_INIT_METAOBJECT
#endif
#endif
#include "moc_qgolistmodel.cpp_"

extern "C" Q_DECL_EXPORT
void C_qmlRegisterType_QGoListModel() {
    qmlRegisterType<QGoListModel>("qt.inc", 1, 0, "GoListModel");
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:393
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QGoListModel10metaObjectEv(void *this_) {
  return (void*)((QGoListModel*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:396
// [-2] void QAbstractListModel(QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN18QGoListModelC2EP7QObject(QObject * parent) {
  return new QGoListModel(parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:397
// [-2] void ~QAbstractListModel()
extern "C" Q_DECL_EXPORT
void C_ZN18QGoListModelD2Ev(void *this_) {
  delete (QGoListModel*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:399
// [24] QModelIndex index(int, int, const QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZNK18QGoListModel5indexEiiRK11QModelIndex(void *this_, int row, int column, QModelIndex* parent) {
  auto rv = ((QGoListModel*)this_)->index(row, column, *parent);
return new QModelIndex(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:400
// [24] QModelIndex sibling(int, int, const QModelIndex &)
extern "C" Q_DECL_EXPORT
void* C_ZNK18QGoListModel7siblingEiiRK11QModelIndex(void *this_, int row, int column, QModelIndex* idx) {
  auto rv = ((QGoListModel*)this_)->sibling(row, column, *idx);
return new QModelIndex(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:401
// [1] bool dropMimeData(const QMimeData *, Qt::DropAction, int, int, const QModelIndex &)
extern "C" Q_DECL_EXPORT
bool C_ZN18QGoListModel12dropMimeDataEPK9QMimeDataN2Qt10DropActionEiiRK11QModelIndex(void *this_, const QMimeData * data, Qt::DropAction action, int row, int column, QModelIndex* parent) {
  return (bool)((QGoListModel*)this_)->dropMimeData(data, action, row, column, *parent);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qabstractitemmodel.h:404
// [4] Qt::ItemFlags flags(const QModelIndex &)
extern "C" Q_DECL_EXPORT
Qt::ItemFlags C_ZNK18QGoListModel5flagsERK11QModelIndex(void *this_, QModelIndex* index) {
  return (Qt::ItemFlags)((QGoListModel*)this_)->flags(*index);
}

//  main block end
