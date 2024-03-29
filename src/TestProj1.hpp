// Tabbed pane project template
#ifndef TestProj1_HPP_
#define TestProj1_HPP_

#include <QObject>

namespace bb { namespace cascades { class Application; }}

/*!
 * @brief Application pane object
 *
 *Use this object to create and init app UI, to create context objects, to register the new meta types etc.
 */
class TestProj1 : public QObject
{
    Q_OBJECT
public:
    TestProj1(bb::cascades::Application *app);
    virtual ~TestProj1() {}
};

#endif /* TestProj1_HPP_ */