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

#import "MSOutlookModels.h"

/**
* The implementation file for type MSOutlookContactFolder.
*/

@implementation MSOutlookContactFolder	

@synthesize odataType = _odataType;
@synthesize ParentFolderId = _parentFolderId;
@synthesize DisplayName = _displayName;
@synthesize Contacts = _contacts;
@synthesize ChildFolders = _childFolders;

- (instancetype)init {

	if (self = [super init]) {

		_odataType = @"#Microsoft.OutlookServices.ContactFolder";
    }

	return self;
}

 
- (void)setParentFolderId:(NSString *)  parentFolderId;
{
    _parentFolderId =  parentFolderId;
    [self valueChanged:parentFolderId forProperty:@"ParentFolderId"];
}

 
- (void)setDisplayName:(NSString *)  displayName;
{
    _displayName =  displayName;
    [self valueChanged:displayName forProperty:@"DisplayName"];
}

 
- (void)setContacts:(NSMutableArray<MSOutlookContact> *)  contacts;
{
    _contacts =  contacts;
    [self valueChanged:contacts forProperty:@"Contacts"];
}

 
- (void)setChildFolders:(NSMutableArray<MSOutlookContactFolder> *)  childFolders;
{
    _childFolders =  childFolders;
    [self valueChanged:childFolders forProperty:@"ChildFolders"];
}

@end