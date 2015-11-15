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



#ifndef MSGRAPHPROFILEPHOTOFETCHER_H
#define MSGRAPHPROFILEPHOTOFETCHER_H

#import "MSGraphModels.h"
#import "api/api.h"
#import "core/core.h"
#import "core/MSOrcMediaEntityFetcher.h"

@class MSGraphProfilePhotoOperations;


/** MSGraphProfilePhotoFetcher
 *
 */
@interface MSGraphProfilePhotoFetcher : MSOrcMediaEntityFetcher

@property (copy, nonatomic, readonly) MSGraphProfilePhotoOperations *operations;

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSOrcExecutable>)parent;
- (void)readWithCallback:(void (^)(MSGraphProfilePhoto *, MSOrcError *))callback;
- (void)update:(MSGraphProfilePhoto *)profilePhoto callback:(void (^)(MSGraphProfilePhoto *, MSOrcError*))callback ;
- (void)delete:(void(^)(int status, MSOrcError *))callback;
- (MSGraphProfilePhotoFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSGraphProfilePhotoFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (MSGraphProfilePhotoFetcher *)select:(NSString *)params;
- (MSGraphProfilePhotoFetcher *)expand:(NSString *)value;

@end

#endif
