//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "JBTLocation_Builder.h"

@class JBTCLocation_Builder, NSString;

@interface JBTICommonLocationImpl_BuilderImpl : NSObject <JBTLocation_Builder>
{
    JBTCLocation_Builder *locationProtoBuilder_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)build;
- (id)setPlaceReferenceWithNSString:(id)arg1;
- (id)setAddressWithJBTAddress:(id)arg1;
- (id)setLongitudeE7WithInt:(int)arg1;
- (id)setLatitudeE7WithInt:(int)arg1;
- (id)initWithJBTCLocation_Builder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

