/* Copyright (c) 2012 Research In Motion Limited.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
 /*
 * CardInvoker.hpp
 *
 *  Created on: Sep 16, 2012
 *      Author: randrade
 */

#ifndef CARDINVOKER_HPP_
#define CARDINVOKER_HPP_


#include "Target.hpp"

#include <QtCore/QObject>

class Opt;
namespace bb {
namespace cascades {
class AbstractPane;
class DropDown;
}
namespace system {
class InvokeManager;
class InvokeReply;
class InvokeQueryTargetsReply;
}
}

class CardInvoker: public QObject
{
    Q_OBJECT


public:
    CardInvoker(QObject *parent = 0);

    Q_INVOKABLE void populateContentDropDown(const QString &dropdown);

    Q_INVOKABLE void setTarget(const QString &category, const QString &name);
    Q_INVOKABLE void setContent(const QString &name, const int &selectedIndex);
    Q_INVOKABLE void updateTarget(const QString &fullpathname);


    void setTargetMap(QDeclarativePropertyMap* targetMap);
    void setAbstractPane(const bb::cascades::AbstractPane *abspane);
    Q_INVOKABLE void setaswallpaper(const int &selectedIndex);


public Q_SLOTS:
    void invoke(const QString &category, const QString &name);

Q_SIGNALS:
    void replyChanged();


private Q_SLOTS:

private:
    Target *m_target;

    QList<Opt *> m_content;
    QDeclarativePropertyMap* m_targetMap;
    const bb::cascades::AbstractPane *m_abstractPane;
    bb::cascades::DropDown *m_dropdown;
    bb::system::InvokeManager *m_imanager;
    bb::system::InvokeQueryTargetsReply *m_targetsReply;
    void initTargets();
};


#endif /* CARDINVOKER_HPP_ */
