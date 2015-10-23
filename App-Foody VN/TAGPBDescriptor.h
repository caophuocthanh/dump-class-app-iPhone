//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString, TAGPBArray;

@interface TAGPBDescriptor : NSObject <NSCopying>
{
    Class messageClass_;
    TAGPBArray *fields_;
    TAGPBArray *enums_;
    TAGPBArray *extensions_;
    unsigned long storageSize_;
    BOOL wireFormat_;
    TAGPBArray *extensionRanges_;
}

+ (id)allocDescriptorForClass:(Class)arg1 rootClass:(Class)arg2 fields:(struct TAGPBMessageFieldDescription *)arg3 fieldCount:(unsigned int)arg4 enums:(struct TAGPBMessageEnumDescription *)arg5 enumCount:(unsigned int)arg6 ranges:(struct TAGPBMessageExtensionRangeDescription *)arg7 rangeCount:(unsigned int)arg8 storageSize:(unsigned long)arg9 wireFormat:(BOOL)arg10;
@property(readonly, nonatomic, getter=isWireFormat) BOOL wireFormat; // @synthesize wireFormat=wireFormat_;
@property(readonly, nonatomic) unsigned long storageSize; // @synthesize storageSize=storageSize_;
@property(readonly, nonatomic) TAGPBArray *extensionRanges; // @synthesize extensionRanges=extensionRanges_;
@property(readonly, nonatomic) TAGPBArray *extensions; // @synthesize extensions=extensions_;
@property(readonly, nonatomic) TAGPBArray *enums; // @synthesize enums=enums_;
@property(readonly, nonatomic) TAGPBArray *fields; // @synthesize fields=fields_;
@property(readonly, nonatomic) Class messageClass; // @synthesize messageClass=messageClass_;
- (id)extensionWithName:(id)arg1;
- (id)extensionWithNumber:(unsigned int)arg1;
- (id)enumWithName:(id)arg1;
- (id)fieldWithName:(id)arg1;
- (id)fieldWithNumber:(unsigned int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) NSString *name;
- (void)dealloc;
- (id)initWithClass:(Class)arg1 fields:(id)arg2 enums:(id)arg3 extensions:(id)arg4 extensionRanges:(id)arg5 storageSize:(unsigned long)arg6 wireFormat:(BOOL)arg7;

@end
