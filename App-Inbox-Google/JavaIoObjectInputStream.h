//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JavaIoInputStream.h"

#import "JavaIoObjectInput.h"
#import "JavaIoObjectStreamConstants.h"

@class IOSObjectArray, JavaIoDataInputStream, JavaIoObjectStreamClass, JavaLangClassLoader, JavaUtilArrayList, JavaUtilHashMap, NSString;

@interface JavaIoObjectInputStream : JavaIoInputStream <JavaIoObjectInput, JavaIoObjectStreamConstants>
{
    JavaIoInputStream *emptyStream_;
    BOOL hasPushbackTC_;
    BOOL pushbackTC_;
    int nestedLevels_;
    int nextHandle_;
    JavaIoDataInputStream *input_;
    JavaIoDataInputStream *primitiveTypes_;
    JavaIoInputStream *primitiveData_;
    BOOL enableResolve_;
    JavaUtilArrayList *objectsRead_;
    id currentObject_;
    JavaIoObjectStreamClass *currentClass_;
    IOSObjectArray *validations_;
    BOOL subclassOverridingImplementation_;
    JavaLangClassLoader *callerClassLoader_;
    BOOL mustResolve_;
    int descriptorHandle_;
    JavaUtilHashMap *cachedSuperclasses_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)__annotations_readLine;
+ (void)initialize;
+ (void)checkedSetSuperClassDescWithJavaIoObjectStreamClass:(id)arg1 withJavaIoObjectStreamClass:(id)arg2;
+ (id)getBaseNameWithNSString:(id)arg1;
+ (id)getClosestUserClassLoader;
+ (id)formatClassSigWithNSString:(id)arg1;
- (void)dealloc;
- (void)verifyAndInitWithJavaIoObjectStreamClass:(id)arg1;
- (int)skipBytesWithInt:(int)arg1;
- (id)resolveObjectWithId:(id)arg1;
- (id)resolveClassWithJavaIoObjectStreamClass:(id)arg1;
- (void)resetState;
- (void)resetSeenObjects;
- (void)registerValidationWithJavaIoObjectInputValidation:(id)arg1 withInt:(int)arg2;
- (void)registerObjectReadWithId:(id)arg1 withInt:(int)arg2 withBoolean:(BOOL)arg3;
- (id)registeredObjectReadWithInt:(int)arg1;
- (id)readUTF;
- (int)readUnsignedShort;
- (int)readUnsignedByte;
- (void)readStreamHeader;
- (short)readShort;
- (id)readObjectOverride;
- (id)readObjectWithBoolean:(BOOL)arg1;
- (id)readUnshared;
- (id)readObject;
- (id)readNewLongStringWithBoolean:(BOOL)arg1;
- (id)readNewStringWithBoolean:(BOOL)arg1;
- (id)missingClassDescriptor;
- (id)readNewObjectWithBoolean:(BOOL)arg1;
- (int)readNewHandle;
- (id)resolveProxyClassWithNSStringArray:(id)arg1;
- (id)readClassDescriptor;
- (id)readNewProxyClassDesc;
- (id)readNewClassDescWithBoolean:(BOOL)arg1;
- (id)readEnumWithBoolean:(BOOL)arg1;
- (id)readEnumDescInternal;
- (id)readEnumDesc;
- (id)readNewClassWithBoolean:(BOOL)arg1;
- (id)readNewArrayWithBoolean:(BOOL)arg1;
- (long long)readLong;
- (id)readLine;
- (int)readInt;
- (void)readObjectForClassWithId:(id)arg1 withJavaIoObjectStreamClass:(id)arg2;
- (void)readObjectNoDataWithId:(id)arg1 withIOSClass:(id)arg2 withJavaIoObjectStreamClass:(id)arg3;
- (int)findStreamSuperclassWithIOSClass:(id)arg1 withJavaUtilList:(id)arg2 withInt:(int)arg3;
- (id)cacheSuperclassesForWithIOSClass:(id)arg1;
- (void)readHierarchyWithId:(id)arg1 withJavaIoObjectStreamClass:(id)arg2;
- (void)readFullyWithByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (void)readFullyWithByteArray:(id)arg1;
- (float)readFloat;
- (void)readFieldValuesWithId:(id)arg1 withJavaIoObjectStreamClass:(id)arg2;
- (void)readFieldValuesWithJavaIoEmulatedFieldsForLoading:(id)arg1;
- (id)readFields;
- (void)readFieldDescriptorsWithJavaIoObjectStreamClass:(id)arg1;
- (id)readException;
- (double)readDouble;
- (id)readCyclicReference;
- (id)readNonPrimitiveContentWithBoolean:(BOOL)arg1;
- (id)readContentWithByte:(BOOL)arg1;
- (id)corruptStreamWithByte:(BOOL)arg1;
- (id)readClassDesc;
- (void)discardData;
- (unsigned short)readChar;
- (BOOL)readByte;
- (BOOL)readBoolean;
- (id)readBlockDataLong;
- (id)readBlockData;
- (int)readWithByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (int)read;
- (void)pushbackTC;
- (BOOL)nextTC;
- (int)nextHandle;
- (BOOL)enableResolveObjectWithBoolean:(BOOL)arg1;
- (void)defaultReadObject;
- (void)close;
- (void)checkReadPrimitiveTypes;
- (int)available;
- (id)initWithJavaIoInputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

