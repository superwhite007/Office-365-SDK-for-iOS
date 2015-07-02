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

@class MSGraphAssignedLicense;
@class MSGraphAssignedPlan;
@class MSGraphPasswordProfile;
@class MSGraphProvisionedPlan;
@class MSGraphProvisioningError;
@class NSStream;
@class MSGraphAppRoleAssignment;
@class MSGraphOAuth2PermissionGrant;
@class MSGraphDirectoryObject;
@class MSGraphMessage;
@class MSGraphCalendar;
@class MSGraphCalendarGroup;
@class MSGraphEvent;
@class MSGraphPhoto;
@class MSGraphDrive;
@class MSGraphItem;

#import <Foundation/Foundation.h>
#import "MSGraphProtocols.h"
#import "MSGraphDirectoryObject.h"

/**
* The header for type User.
*/

@interface MSGraphUser : MSGraphDirectoryObject
@property (nonatomic, getter=accountEnabled, setter=setAccountEnabled:) BOOL accountEnabled;
@property (retain, nonatomic, readwrite, getter=assignedLicenses, setter=setAssignedLicenses:) NSMutableArray<MSGraphAssignedLicense> *assignedLicenses;
@property (retain, nonatomic, readwrite, getter=assignedPlans, setter=setAssignedPlans:) NSMutableArray<MSGraphAssignedPlan> *assignedPlans;
@property (retain, nonatomic, readwrite, getter=city, setter=setCity:) NSString *city;
@property (retain, nonatomic, readwrite, getter=country, setter=setCountry:) NSString *country;
@property (retain, nonatomic, readwrite, getter=department, setter=setDepartment:) NSString *department;
@property (nonatomic, getter=dirSyncEnabled, setter=setDirSyncEnabled:) BOOL dirSyncEnabled;
@property (retain, nonatomic, readwrite, getter=displayName, setter=setDisplayName:) NSString *displayName;
@property (retain, nonatomic, readwrite, getter=facsimileTelephoneNumber, setter=setFacsimileTelephoneNumber:) NSString *facsimileTelephoneNumber;
@property (retain, nonatomic, readwrite, getter=givenName, setter=setGivenName:) NSString *givenName;
@property (retain, nonatomic, readwrite, getter=immutableId, setter=setImmutableId:) NSString *immutableId;
@property (retain, nonatomic, readwrite, getter=jobTitle, setter=setJobTitle:) NSString *jobTitle;
@property (retain, nonatomic, readwrite, getter=lastDirSyncTime, setter=setLastDirSyncTime:) NSDate *lastDirSyncTime;
@property (retain, nonatomic, readwrite, getter=mail, setter=setMail:) NSString *mail;
@property (retain, nonatomic, readwrite, getter=mailNickname, setter=setMailNickname:) NSString *mailNickname;
@property (retain, nonatomic, readwrite, getter=mobile, setter=setMobile:) NSString *mobile;
@property (retain, nonatomic, readwrite, getter=onPremisesSecurityIdentifier, setter=setOnPremisesSecurityIdentifier:) NSString *onPremisesSecurityIdentifier;
@property (retain, nonatomic, readwrite, getter=otherMails, setter=setOtherMails:) NSMutableArray *otherMails;
@property (retain, nonatomic, readwrite, getter=passwordPolicies, setter=setPasswordPolicies:) NSString *passwordPolicies;
@property (retain, nonatomic, readwrite, getter=passwordProfile, setter=setPasswordProfile:) MSGraphPasswordProfile *passwordProfile;
@property (retain, nonatomic, readwrite, getter=physicalDeliveryOfficeName, setter=setPhysicalDeliveryOfficeName:) NSString *physicalDeliveryOfficeName;
@property (retain, nonatomic, readwrite, getter=postalCode, setter=setPostalCode:) NSString *postalCode;
@property (retain, nonatomic, readwrite, getter=preferredLanguage, setter=setPreferredLanguage:) NSString *preferredLanguage;
@property (retain, nonatomic, readwrite, getter=provisionedPlans, setter=setProvisionedPlans:) NSMutableArray<MSGraphProvisionedPlan> *provisionedPlans;
@property (retain, nonatomic, readwrite, getter=provisioningErrors, setter=setProvisioningErrors:) NSMutableArray<MSGraphProvisioningError> *provisioningErrors;
@property (retain, nonatomic, readwrite, getter=proxyAddresses, setter=setProxyAddresses:) NSMutableArray *proxyAddresses;
@property (retain, nonatomic, readwrite, getter=sipProxyAddress, setter=setSipProxyAddress:) NSString *sipProxyAddress;
@property (retain, nonatomic, readwrite, getter=state, setter=setState:) NSString *state;
@property (retain, nonatomic, readwrite, getter=streetAddress, setter=setStreetAddress:) NSString *streetAddress;
@property (retain, nonatomic, readwrite, getter=surname, setter=setSurname:) NSString *surname;
@property (retain, nonatomic, readwrite, getter=telephoneNumber, setter=setTelephoneNumber:) NSString *telephoneNumber;
@property (retain, nonatomic, readwrite, getter=thumbnailPhoto, setter=setThumbnailPhoto:) NSStream *thumbnailPhoto;
@property (retain, nonatomic, readwrite, getter=usageLocation, setter=setUsageLocation:) NSString *usageLocation;
@property (retain, nonatomic, readwrite, getter=userPrincipalName, setter=setUserPrincipalName:) NSString *userPrincipalName;
@property (retain, nonatomic, readwrite, getter=userType, setter=setUserType:) NSString *userType;
@property (retain, nonatomic, readwrite, getter=mailboxGuid, setter=setMailboxGuid:) NSString *MailboxGuid;
@property (retain, nonatomic, readwrite, getter=aboutMe, setter=setAboutMe:) NSString *AboutMe;
@property (retain, nonatomic, readwrite, getter=alias, setter=setAlias:) NSString *Alias;
@property (retain, nonatomic, readwrite, getter=birthday, setter=setBirthday:) NSDate *Birthday;
@property (retain, nonatomic, readwrite, getter=hireDate, setter=setHireDate:) NSDate *HireDate;
@property (retain, nonatomic, readwrite, getter=interests, setter=setInterests:) NSMutableArray *Interests;
@property (retain, nonatomic, readwrite, getter=mySite, setter=setMySite:) NSString *MySite;
@property (retain, nonatomic, readwrite, getter=pastProjects, setter=setPastProjects:) NSMutableArray *PastProjects;
@property (retain, nonatomic, readwrite, getter=preferredName, setter=setPreferredName:) NSString *PreferredName;
@property (retain, nonatomic, readwrite, getter=principalName, setter=setPrincipalName:) NSString *PrincipalName;
@property (retain, nonatomic, readwrite, getter=responsibilities, setter=setResponsibilities:) NSMutableArray *Responsibilities;
@property (retain, nonatomic, readwrite, getter=schools, setter=setSchools:) NSMutableArray *Schools;
@property (retain, nonatomic, readwrite, getter=skills, setter=setSkills:) NSMutableArray *Skills;
@property (retain, nonatomic, readwrite, getter=tags, setter=setTags:) NSMutableArray *Tags;
@property (retain, nonatomic, readwrite, getter=appRoleAssignments, setter=setAppRoleAssignments:) NSMutableArray<MSGraphAppRoleAssignment> *appRoleAssignments;
@property (retain, nonatomic, readwrite, getter=oauth2PermissionGrants, setter=setOauth2PermissionGrants:) NSMutableArray<MSGraphOAuth2PermissionGrant> *oauth2PermissionGrants;
@property (retain, nonatomic, readwrite, getter=ownedDevices, setter=setOwnedDevices:) NSMutableArray<MSGraphDirectoryObject> *ownedDevices;
@property (retain, nonatomic, readwrite, getter=registeredDevices, setter=setRegisteredDevices:) NSMutableArray<MSGraphDirectoryObject> *registeredDevices;
@property (retain, nonatomic, readwrite, getter=manager, setter=setManager:) MSGraphDirectoryObject *manager;
@property (retain, nonatomic, readwrite, getter=directReports, setter=setDirectReports:) NSMutableArray<MSGraphDirectoryObject> *directReports;
@property (retain, nonatomic, readwrite, getter=memberOf, setter=setMemberOf:) NSMutableArray<MSGraphDirectoryObject> *memberOf;
@property (retain, nonatomic, readwrite, getter=createdObjects, setter=setCreatedObjects:) NSMutableArray<MSGraphDirectoryObject> *createdObjects;
@property (retain, nonatomic, readwrite, getter=ownedObjects, setter=setOwnedObjects:) NSMutableArray<MSGraphDirectoryObject> *ownedObjects;
@property (retain, nonatomic, readwrite, getter=messages, setter=setMessages:) NSMutableArray<MSGraphMessage> *Messages;
@property (retain, nonatomic, readwrite, getter=calendars, setter=setCalendars:) NSMutableArray<MSGraphCalendar> *Calendars;
@property (retain, nonatomic, readwrite, getter=calendar, setter=setCalendar:) MSGraphCalendar *Calendar;
@property (retain, nonatomic, readwrite, getter=calendarGroups, setter=setCalendarGroups:) NSMutableArray<MSGraphCalendarGroup> *CalendarGroups;
@property (retain, nonatomic, readwrite, getter=events, setter=setEvents:) NSMutableArray<MSGraphEvent> *Events;
@property (retain, nonatomic, readwrite, getter=calendarView, setter=setCalendarView:) NSMutableArray<MSGraphEvent> *CalendarView;
@property (retain, nonatomic, readwrite, getter=userPhoto, setter=setUserPhoto:) MSGraphPhoto *UserPhoto;
@property (retain, nonatomic, readwrite, getter=userPhotos, setter=setUserPhotos:) NSMutableArray<MSGraphPhoto> *UserPhotos;
@property (retain, nonatomic, readwrite, getter=drive, setter=setDrive:) MSGraphDrive *drive;
@property (retain, nonatomic, readwrite, getter=files, setter=setFiles:) NSMutableArray<MSGraphItem> *files;

@end