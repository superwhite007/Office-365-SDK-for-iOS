/*******************************************************************************
 * Copyright (c) Microsoft Open Technologies, Inc.
 * All Rights Reserved
 * See License.txt in the project root for license information.
 ******************************************************************************/

#import "MSOODataOperations.h"
#import "MSOEntity.h"

@interface MSOEntityOperations : MSOODataOperations

-(id)initWith:(NSString *)urlComponent :(id<MSOODataExecutable>)parent;

@end