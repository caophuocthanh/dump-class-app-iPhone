//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "OrgXmlSaxAttributes.h"

@class NSString, OrgXmlSaxHelpersParserAdapter;

@interface OrgXmlSaxHelpersParserAdapter_AttributeListAdapter : NSObject <OrgXmlSaxAttributes>
{
    OrgXmlSaxHelpersParserAdapter *this$0_;
    id <OrgXmlSaxAttributeList> qAtts_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)__javaClone;
- (void)dealloc;
- (id)getValueWithNSString:(id)arg1;
- (id)getValueWithNSString:(id)arg1 withNSString:(id)arg2;
- (id)getTypeWithNSString:(id)arg1;
- (id)getTypeWithNSString:(id)arg1 withNSString:(id)arg2;
- (int)getIndexWithNSString:(id)arg1;
- (int)getIndexWithNSString:(id)arg1 withNSString:(id)arg2;
- (id)getValueWithInt:(int)arg1;
- (id)getTypeWithInt:(int)arg1;
- (id)getQNameWithInt:(int)arg1;
- (id)getLocalNameWithInt:(int)arg1;
- (id)getURIWithInt:(int)arg1;
- (int)getLength;
- (void)setAttributeListWithOrgXmlSaxAttributeList:(id)arg1;
- (id)initWithOrgXmlSaxHelpersParserAdapter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

