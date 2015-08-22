//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, PSPDFModel<PSPDFJSONSerializing>;

@interface PSPDFJSONAdapter : NSObject
{
    PSPDFModel<PSPDFJSONSerializing> *_model;
    Class _modelClass;
    NSDictionary *_JSONKeyPathsByPropertyKey;
}

+ (id)JSONDictionaryFromModel:(id)arg1;
+ (id)modelOfClass:(Class)arg1 fromJSONDictionary:(id)arg2 error:(id *)arg3;
@property(readonly, copy, nonatomic) NSDictionary *JSONKeyPathsByPropertyKey; // @synthesize JSONKeyPathsByPropertyKey=_JSONKeyPathsByPropertyKey;
@property(readonly, nonatomic) Class modelClass; // @synthesize modelClass=_modelClass;
@property(readonly, nonatomic) PSPDFModel<PSPDFJSONSerializing> *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (id)JSONKeyPathForKey:(id)arg1;
- (id)JSONTransformerForKey:(id)arg1;
- (id)JSONDictionary;
- (id)initWithModel:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 modelClass:(Class)arg2 error:(id *)arg3;
- (id)init;

@end
