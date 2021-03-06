//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBMemModelObject.h"

#import "FBQueriedEntityFieldsProtocol.h"
#import "FBQueriedMediaSetFieldsProtocol.h"
#import "FBQueriedNodeFieldsProtocol.h"

@class NSString;

@interface FBMemTaggedMediaOfFamilyMemberMediaSet : FBMemModelObject <FBQueriedNodeFieldsProtocol, FBQueriedEntityFieldsProtocol, FBQueriedMediaSetFieldsProtocol>
{
}

- (id)mediaContainerName;
- (id)mediaContainerCoverPhoto;
- (id)canViewerEdit;
- (id)size;
- (id)coverPhotoForContainerForSession:(id)arg1;
- (id)titleForContainerForSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

