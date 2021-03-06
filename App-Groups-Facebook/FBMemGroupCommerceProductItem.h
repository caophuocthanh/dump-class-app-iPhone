//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBMemModelObject.h"

#import "FBQueriedEntityFieldsProtocol.h"
#import "FBQueriedNodeFieldsProtocol.h"

@class NSString;

@interface FBMemGroupCommerceProductItem : FBMemModelObject <FBQueriedNodeFieldsProtocol, FBQueriedEntityFieldsProtocol>
{
}

@property(readonly, copy, nonatomic) NSString *statusLabel;
@property(readonly, nonatomic) BOOL isProductActive;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

