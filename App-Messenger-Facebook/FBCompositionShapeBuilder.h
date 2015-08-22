//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface FBCompositionShapeBuilder : NSObject
{
    NSString *_name;
    NSString *_klass;
    NSString *_color;
    float _lineWidth;
    float _rotation;
    BOOL _filled;
    NSArray *_properties;
    float _cornerRadius;
}

+ (id)aCompositionShapeFromExistingCompositionShape:(id)arg1;
+ (id)aCompositionShape;
- (void).cxx_destruct;
- (id)withCornerRadius:(float)arg1;
- (id)withProperties:(id)arg1;
- (id)withFilled:(BOOL)arg1;
- (id)withRotation:(float)arg1;
- (id)withLineWidth:(float)arg1;
- (id)withColor:(id)arg1;
- (id)withKlass:(id)arg1;
- (id)withName:(id)arg1;
- (id)build;

@end
