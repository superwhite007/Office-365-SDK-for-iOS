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

@class MSDirectoryUserFetcher;
@class MSDirectoryUserCollectionFetcher;

#import <core/core.h>
#import "MSDirectoryModels.h"

/**
* The header for type MSDirectoryUserCollectionFetcher.
*/

@protocol MSDirectoryUserCollectionFetcherProtocol<MSOrcCollectionFetcher>

@optional

- (void)readWithCallback:(void (^)(NSArray<MSDirectoryUser> *users, MSOrcError *error))callback;

- (MSDirectoryUserCollectionFetcher *)select:(NSString *)params;
- (MSDirectoryUserCollectionFetcher *)filter:(NSString *)params;
- (MSDirectoryUserCollectionFetcher *)search:(NSString *)params;
- (MSDirectoryUserCollectionFetcher *)top:(int)value;
- (MSDirectoryUserCollectionFetcher *)skip:(int)value;
- (MSDirectoryUserCollectionFetcher *)expand:(NSString *)value;
- (MSDirectoryUserCollectionFetcher *)orderBy:(NSString *)params;
- (MSDirectoryUserCollectionFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSDirectoryUserCollectionFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;

@required

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSOrcExecutable>)parent;
- (MSDirectoryUserFetcher *)getById:(NSString *)Id;
- (void)add:(MSDirectoryUser *)entity callback:(void (^)(MSDirectoryUser *user, MSOrcError *error))callback;

@end

@interface MSDirectoryUserCollectionFetcher : MSOrcCollectionFetcher<MSDirectoryUserCollectionFetcherProtocol>

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSOrcExecutable>)parent;

@end