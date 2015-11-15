/*******************************************************************************
**NOTE** This code was generated by a tool and will occasionally be
overwritten. We welcome comments and issues regarding this code; they will be
addressed in the generation tool. If you wish to submit pull requests, please
do so for the templates in that tool.

This code was generated by Vipr (https://github.com/microsoft/vipr) using
the T4TemplateWriter (https://github.com/msopentech/vipr-t4templatewriter).

Copyright (c) Microsoft Open Technologies, Inc. All Rights Reserved.
Licensed under the Apache License 2.0; see LICENSE in the source repository
root for authoritative license information.﻿
******************************************************************************/



#ifndef MSGRAPHDIRECTORYROLEFETCHER_H
#define MSGRAPHDIRECTORYROLEFETCHER_H

#import "MSGraphModels.h"
#import "api/api.h"
#import "core/core.h"
#import "core/MSOrcEntityFetcher.h"

@class MSGraphDirectoryObjectCollectionFetcher;
@class MSGraphDirectoryObjectCollectionFetcher;
@class MSGraphDirectoryObjectFetcher;
@class MSGraphDirectoryRoleOperations;


/** MSGraphDirectoryRoleFetcher
 *
 */
@interface MSGraphDirectoryRoleFetcher : MSOrcEntityFetcher

@property (copy, nonatomic, readonly) MSGraphDirectoryRoleOperations *operations;

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSOrcExecutable>)parent;
- (void)readWithCallback:(void (^)(MSGraphDirectoryRole *, MSOrcError *))callback;
- (void)update:(MSGraphDirectoryRole *)directoryRole callback:(void (^)(MSGraphDirectoryRole *, MSOrcError*))callback ;
- (void)delete:(void(^)(int status, MSOrcError *))callback;
- (MSGraphDirectoryRoleFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSGraphDirectoryRoleFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (MSGraphDirectoryRoleFetcher *)select:(NSString *)params;
- (MSGraphDirectoryRoleFetcher *)expand:(NSString *)value;
@property (strong, nonatomic, readonly, getter=members) MSGraphDirectoryObjectCollectionFetcher *members;

- (MSGraphDirectoryObjectFetcher *)membersById:(id)identifier;


@end

#endif
