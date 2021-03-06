/* This file is part of the UAF (Unified Architecture Framework) project.
 *
 * Copyright (C) 2012 Wim Pessemier (Institute of Astronomy, KULeuven)
 *
 * Project website: http://www.ster.kuleuven.be/uaf
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef UAF_BASESUBSCRIPTIONRESULTTARGET_H_
#define UAF_BASESUBSCRIPTIONRESULTTARGET_H_


// STD
// SDK
// UAF
#include "uaf/util/handles.h"
#include "uaf/client/clientexport.h"
#include "uaf/client/results/basesessionresulttarget.h"


namespace uaf
{

    /*******************************************************************************************//**
    * A uaf::BaseSubscriptionResultTarget is the superclass of the result targets that are handled
    * at the Subscription level.
    *
    * This is the superclass of an uaf::CreateMonitoredDataResultTarget,
    * uaf::CrateMonitoredEventsResultTarget, ... since these targets are all handled at the
    * Subscription level and not at the Session level.
    *
    * Result targets are part of a Result, and correspond one-to-one to the Request targets of a
    * Request.
    *
    * @ingroup ClientResults
    ***********************************************************************************************/
    class UAF_EXPORT BaseSubscriptionResultTarget : public uaf::BaseSessionResultTarget
    {
    public:


        /**
         * Default constructor.
         */
        BaseSubscriptionResultTarget()
        : BaseSessionResultTarget(),
          clientSubscriptionHandle(0)
        {}

        /** The clientSubscriptionHandle of the subscription that was used to handle this target. */
        uaf::ClientSubscriptionHandle clientSubscriptionHandle;

    };

}




#endif /* UAF_BASESUBSCRIPTIONRESULTTARGET_H_ */
