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

#import "MSOneNoteModels.h"

/**
* The implementation file for type MSOneNoteNotebook.
*/

@implementation MSOneNoteNotebook	

@synthesize odataType = _odataType;
@synthesize isDefault = _isDefault;
@synthesize userRole = _userRole;
@synthesize isShared = _isShared;
@synthesize sectionsUrl = _sectionsUrl;
@synthesize sectionGroupsUrl = _sectionGroupsUrl;
@synthesize links = _links;
@synthesize name = _name;
@synthesize createdBy = _createdBy;
@synthesize lastModifiedBy = _lastModifiedBy;
@synthesize lastModifiedTime = _lastModifiedTime;
@synthesize id = _id;
@synthesize $$__self = _$$__self;
@synthesize createdTime = _createdTime;
@synthesize sections = _sections;
@synthesize sectionGroups = _sectionGroups;

- (instancetype)init {

	if (self = [super init]) {

		_odataType = @"#Microsoft.OneNote.Api.Notebook";
    }

	return self;
}

 
- (void)setIsDefault:(BOOL )  isDefault;
{
    _isDefault =  isDefault;
    [self valueChangedForBool:isDefault forProperty:@"isDefault"];
}


- (void)setuserRoleString:(NSString *)value {

	if ([value isEqualToString:@"Owner"]) {
		
		_userRole = MSOneNote_UserRole_Owner;
        [self valueChanged:value forProperty:@"userRole"];
	}

	if ([value isEqualToString:@"Contributor"]) {
		
		_userRole = MSOneNote_UserRole_Contributor;
        [self valueChanged:value forProperty:@"userRole"];
	}

	if ([value isEqualToString:@"Reader"]) {
		
		_userRole = MSOneNote_UserRole_Reader;
        [self valueChanged:value forProperty:@"userRole"];
	}

	if ([value isEqualToString:@"None"]) {
		
		_userRole = MSOneNote_UserRole_None;
        [self valueChanged:value forProperty:@"userRole"];
	}
}
 
- (void)setIsShared:(BOOL )  isShared;
{
    _isShared =  isShared;
    [self valueChangedForBool:isShared forProperty:@"isShared"];
}

 
- (void)setSectionsUrl:(NSString *)  sectionsUrl;
{
    _sectionsUrl =  sectionsUrl;
    [self valueChanged:sectionsUrl forProperty:@"sectionsUrl"];
}

 
- (void)setSectionGroupsUrl:(NSString *)  sectionGroupsUrl;
{
    _sectionGroupsUrl =  sectionGroupsUrl;
    [self valueChanged:sectionGroupsUrl forProperty:@"sectionGroupsUrl"];
}

 
- (void)setLinks:(MSOneNoteNotebookLinks *)  links;
{
    _links =  links;
    [self valueChanged:links forProperty:@"links"];
}

 
- (void)setName:(NSString *)  name;
{
    _name =  name;
    [self valueChanged:name forProperty:@"name"];
}

 
- (void)setCreatedBy:(NSString *)  createdBy;
{
    _createdBy =  createdBy;
    [self valueChanged:createdBy forProperty:@"createdBy"];
}

 
- (void)setLastModifiedBy:(NSString *)  lastModifiedBy;
{
    _lastModifiedBy =  lastModifiedBy;
    [self valueChanged:lastModifiedBy forProperty:@"lastModifiedBy"];
}

 
- (void)setLastModifiedTime:(NSDate *)  lastModifiedTime;
{
    _lastModifiedTime =  lastModifiedTime;
    [self valueChanged:lastModifiedTime forProperty:@"lastModifiedTime"];
}

 
- (void)setId:(NSString *)  id;
{
    _id =  id;
    [self valueChanged:id forProperty:@"id"];
}

 
- (void)setSelf:(NSString *)  $$__self;
{
    _$$__self =  $$__self;
    [self valueChanged:$$__self forProperty:@"$$__self"];
}

 
- (void)setCreatedTime:(NSDate *)  createdTime;
{
    _createdTime =  createdTime;
    [self valueChanged:createdTime forProperty:@"createdTime"];
}

 
- (void)setSections:(NSMutableArray<MSOneNoteSection> *)  sections;
{
    _sections =  sections;
    [self valueChanged:sections forProperty:@"sections"];
}

 
- (void)setSectionGroups:(NSMutableArray<MSOneNoteSectionGroup> *)  sectionGroups;
{
    _sectionGroups =  sectionGroups;
    [self valueChanged:sectionGroups forProperty:@"sectionGroups"];
}

@end