/*
    This file is part of Kismet

    Kismet is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    Kismet is distributed in the hope that it will be useful,
      but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Kismet; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

#ifndef __DOT11_IE_54_MOBILITY_H__
#define __DOT11_IE_54_MOBILITY_H__

/* dot11 ie mobility report
 *
 */

#include <string>
#include <memory>
#include <vector>
#include <kaitai/kaitaistream.h>

class dot11_ie_54_mobility {
public:
    dot11_ie_54_mobility() { }

    ~dot11_ie_54_mobility() { }

    void parse(std::shared_ptr<kaitai::kstream> p_io);

    uint16_t mobility_domain() {
        return m_mobility_domain;
    }

    uint8_t mobility_policy() {
        return m_mobility_policy;
    }

    unsigned int policy_fastbss_over_ds() {
        return mobility_policy() & 0x01;
    }

    unsigned int policy_resource_request_capability() {
        return mobility_policy() & 0x02;
    }

protected:
    uint16_t m_mobility_domain;
    uint8_t m_mobility_policy;

};


#endif

