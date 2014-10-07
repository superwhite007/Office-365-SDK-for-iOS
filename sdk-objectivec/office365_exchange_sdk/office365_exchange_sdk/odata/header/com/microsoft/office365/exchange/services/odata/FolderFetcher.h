/*******************************************************************************
 * Copyright (c) Microsoft Open Technologies, Inc.
 * All Rights Reserved
 * See License.txt in the project root for license information.
 ******************************************************************************/
#import "ODataEntityFetcher.h"
#import "ChildFoldersCollectionFetcher.h"
#import "MessagesCollectionFetcher.h"

@interface FolderFetcher : ODataEntityFetcher

-(FolderOperations*) getOperations;

-(id)initWith:(NSString *)urlComponent :(ODataExecutable *)parent;
-(FolderCollectionFetcher*) getChildFolders;
-(MessageCollectionFetcher*) getMessages;
@end