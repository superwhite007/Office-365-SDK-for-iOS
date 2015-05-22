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

@class MSDirectoryDirectoryObjectFetcher;
@class MSDirectoryDirectoryObjectCollectionFetcher;
@class MSDirectoryApplicationFetcher;
@class MSDirectoryUserFetcher;
@class MSDirectoryExtensionPropertyFetcher;
@class MSDirectoryContactFetcher;
@class MSDirectoryDeviceFetcher;
@class MSDirectoryDeviceConfigurationFetcher;
@class MSDirectoryDirectoryLinkChangeFetcher;
@class MSDirectoryAppRoleAssignmentFetcher;
@class MSDirectoryGroupFetcher;
@class MSDirectoryDirectoryRoleFetcher;
@class MSDirectoryDirectoryRoleTemplateFetcher;
@class MSDirectoryServicePrincipalFetcher;
@class MSDirectoryTenantDetailFetcher;
@class MSDirectoryDirectoryObjectOperations;
@class MSDirectoryDirectoryObjectFetcher;

#import <core/core.h>
#import "MSDirectoryModels.h"

/**
* The header for type MSDirectoryDirectoryObjectFetcher.
*/

@protocol MSDirectoryDirectoryObjectFetcherProtocol<MSOrcEntityFetcher>

@optional

- (void) readWithCallback:(void (^)(MSDirectoryDirectoryObject *directoryObject, MSOrcError *error))callback;
- (MSDirectoryDirectoryObjectFetcher *)addCustomParametersWithName:(NSString *)name value:(id)value;
- (MSDirectoryDirectoryObjectFetcher *)addCustomHeaderWithName:(NSString *)name value:(NSString *)value;
- (MSDirectoryDirectoryObjectFetcher *)select:(NSString *)params;
- (MSDirectoryDirectoryObjectFetcher *)expand:(NSString *)value;

@required

@property (copy, nonatomic, readonly) MSDirectoryDirectoryObjectOperations *operations;

@end

@interface MSDirectoryDirectoryObjectFetcher : MSOrcEntityFetcher<MSDirectoryDirectoryObjectFetcherProtocol>

- (instancetype)initWithUrl:(NSString*)urlComponent parent:(id<MSOrcExecutable>)parent;
- (void)update:(MSDirectoryDirectoryObject *)directoryObject callback:(void(^)(MSDirectoryDirectoryObject *directoryObject, MSOrcError *error))callback;
- (void)delete:(void(^)(int status, MSOrcError *error))callback;


@property (retain, nonatomic, readonly, getter=createdOnBehalfOf) MSDirectoryDirectoryObjectFetcher *createdOnBehalfOf;
@property (retain, nonatomic, readonly, getter=createdObjects) MSDirectoryDirectoryObjectCollectionFetcher *createdObjects;

- (MSDirectoryDirectoryObjectFetcher *)getCreatedObjectsById:(NSString*)id;


@property (retain, nonatomic, readonly, getter=manager) MSDirectoryDirectoryObjectFetcher *manager;
@property (retain, nonatomic, readonly, getter=directReports) MSDirectoryDirectoryObjectCollectionFetcher *directReports;

- (MSDirectoryDirectoryObjectFetcher *)getDirectReportsById:(NSString*)id;

@property (retain, nonatomic, readonly, getter=members) MSDirectoryDirectoryObjectCollectionFetcher *members;

- (MSDirectoryDirectoryObjectFetcher *)getMembersById:(NSString*)id;

@property (retain, nonatomic, readonly, getter=memberOf) MSDirectoryDirectoryObjectCollectionFetcher *memberOf;

- (MSDirectoryDirectoryObjectFetcher *)getMemberOfById:(NSString*)id;

@property (retain, nonatomic, readonly, getter=owners) MSDirectoryDirectoryObjectCollectionFetcher *owners;

- (MSDirectoryDirectoryObjectFetcher *)getOwnersById:(NSString*)id;

@property (retain, nonatomic, readonly, getter=ownedObjects) MSDirectoryDirectoryObjectCollectionFetcher *ownedObjects;

- (MSDirectoryDirectoryObjectFetcher *)getOwnedObjectsById:(NSString*)id;

- (MSDirectoryApplicationFetcher *)asApplication;	
- (MSDirectoryUserFetcher *)asUser;	
- (MSDirectoryExtensionPropertyFetcher *)asExtensionProperty;	
- (MSDirectoryContactFetcher *)asContact;	
- (MSDirectoryDeviceFetcher *)asDevice;	
- (MSDirectoryDeviceConfigurationFetcher *)asDeviceConfiguration;	
- (MSDirectoryDirectoryLinkChangeFetcher *)asDirectoryLinkChange;	
- (MSDirectoryAppRoleAssignmentFetcher *)asAppRoleAssignment;	
- (MSDirectoryGroupFetcher *)asGroup;	
- (MSDirectoryDirectoryRoleFetcher *)asDirectoryRole;	
- (MSDirectoryDirectoryRoleTemplateFetcher *)asDirectoryRoleTemplate;	
- (MSDirectoryServicePrincipalFetcher *)asServicePrincipal;	
- (MSDirectoryTenantDetailFetcher *)asTenantDetail;	

@end