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

@class MSOutlookUserFetcher;
@class MSOutlookUserCollectionFetcher;

#import <core/core.h>
#import "MSOutlookModels.h"

/**
* The header for type MSOutlookUserCollectionFetcher.
*/

@protocol MSOutlookUserCollectionFetcherProtocol<MSOrcCollectionFetcher>

@optional

- (void)readWithCallback:(void (^)(NSArray<MSOutlookUser> *users, MSOrcError *error))callback;

- (MSOutlookUserCollectionFetcher *)select:(NSString *)params;
- (MSOutlookUserCollectionFetcher *)filter:(NSString *)params;
- (MSOutlookUserCollectionFetcher *)search:(NSString *)params;
- (MSOutlookUserCollectionFetcher *)top:(int)value;
- (MSOutlookUserCollectionFetcher *)skip:(int)value;
- (MSOutlookUserCollectionFetcher *)expand:(NSString *)value;
- (MSOutlookUserCollectionFetcher *)orderBy:(NSString *)params;
- (MSOutlookUserCollectionFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSOutlookUserCollectionFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;

@required

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSOrcExecutable>)parent;
- (MSOutlookUserFetcher *)getById:(NSString *)Id;
- (void)add:(MSOutlookUser *)entity callback:(void (^)(MSOutlookUser *user, MSOrcError *error))callback;

@end

@interface MSOutlookUserCollectionFetcher : MSOrcCollectionFetcher<MSOutlookUserCollectionFetcherProtocol>

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSOrcExecutable>)parent;

@end