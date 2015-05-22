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

@class MSDirectoryExtensionPropertyFetcher;
@class MSDirectoryExtensionPropertyCollectionFetcher;

#import <core/core.h>
#import "MSDirectoryModels.h"

/**
* The header for type MSDirectoryExtensionPropertyCollectionFetcher.
*/

@protocol MSDirectoryExtensionPropertyCollectionFetcherProtocol<MSOrcCollectionFetcher>

@optional

- (void)readWithCallback:(void (^)(NSArray<MSDirectoryExtensionProperty> *extensionPropertys, MSOrcError *error))callback;

- (MSDirectoryExtensionPropertyCollectionFetcher *)select:(NSString *)params;
- (MSDirectoryExtensionPropertyCollectionFetcher *)filter:(NSString *)params;
- (MSDirectoryExtensionPropertyCollectionFetcher *)search:(NSString *)params;
- (MSDirectoryExtensionPropertyCollectionFetcher *)top:(int)value;
- (MSDirectoryExtensionPropertyCollectionFetcher *)skip:(int)value;
- (MSDirectoryExtensionPropertyCollectionFetcher *)expand:(NSString *)value;
- (MSDirectoryExtensionPropertyCollectionFetcher *)orderBy:(NSString *)params;
- (MSDirectoryExtensionPropertyCollectionFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSDirectoryExtensionPropertyCollectionFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;

@required

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSOrcExecutable>)parent;
- (MSDirectoryExtensionPropertyFetcher *)getById:(NSString *)Id;
- (void)add:(MSDirectoryExtensionProperty *)entity callback:(void (^)(MSDirectoryExtensionProperty *extensionProperty, MSOrcError *error))callback;

@end

@interface MSDirectoryExtensionPropertyCollectionFetcher : MSOrcCollectionFetcher<MSDirectoryExtensionPropertyCollectionFetcherProtocol>

- (instancetype)initWithUrl:(NSString *)urlComponent parent:(id<MSOrcExecutable>)parent;

@end