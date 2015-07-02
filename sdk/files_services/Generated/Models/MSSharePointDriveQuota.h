/*******************************************************************************
Copyright (c) Microsoft Open Technologies, Inc. All Rights Reserved.
Licensed under the MIT or Apache License; see LICENSE in the source repository
root for authoritative license information.﻿

**NOTE** This code was generated by a tool and will occasionally be
overwritten. We welcome comments and issues regarding this code; they will be
addressed in the generation tool. If you wish to submit pull requests, please
do so for the templates in that tool.

This code was generated by Vipr (https://github.com/microsoft/vipr) using
the T4TemplateWriter (https://github.com/msopentech/vipr-t4templatewriter).
******************************************************************************/

#import <Foundation/Foundation.h>
#import "MSSharePointProtocols.h"
#import "MSOrcBaseEntity.h"

/**
* The header for type DriveQuota.
*/

@interface MSSharePointDriveQuota : MSOrcBaseEntity
@property (nonatomic, getter=deleted, setter=setDeleted:) int deleted;
@property (nonatomic, getter=remaining, setter=setRemaining:) int remaining;
@property (retain, nonatomic, readwrite, getter=state, setter=setState:) NSString *state;
@property (nonatomic, getter=total, setter=setTotal:) int total;

@end