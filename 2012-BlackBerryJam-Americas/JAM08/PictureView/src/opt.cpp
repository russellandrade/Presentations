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
 #include "Opt.hpp"

Opt::Opt(const Opt &opt)
    : m_text(opt.m_text)
    , m_mime(opt.m_mime)
    , m_uri(opt.m_uri)
    , m_data(opt.m_data)
    , m_action(opt.m_action)
    , m_description(opt.m_description)
{
}

Opt::Opt(const QString &text, const QString &description, const QString &mime, const QString &uri, const QString &data, const QString &action)
    : m_text(text)
    , m_mime(mime)
    , m_uri(uri)
    , m_data(data)
    , m_action(action)
    , m_description(description)
{
}

QString Opt::text() const
{
    return m_text;
}

QString Opt::mime() const
{
    return m_mime;
}

QString Opt::uri() const
{
    return m_uri;
}

QString Opt::data() const
{
    return m_data;
}

QString Opt::action() const
{
    return m_action;
}

QString Opt::description() const
{
    return m_description;
}
