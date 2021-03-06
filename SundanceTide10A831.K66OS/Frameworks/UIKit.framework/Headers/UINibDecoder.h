/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSCoder.h> // Unknown library

@class UINibStringIDTable;

__attribute__((visibility("hidden")))
@interface UINibDecoder : NSCoder {
	Class arrayClass;	// 4 = 0x4
	Class setClass;	// 8 = 0x8
	Class dictionaryClass;	// 12 = 0xc
	Class *classes;	// 16 = 0x10
	id *missingClasses;	// 20 = 0x14
	UINibDecoderObjectEntry *objects;	// 24 = 0x18
	UINibDecoderValue *values;	// 28 = 0x1c
	char *valueTypes;	// 32 = 0x20
	void *valueData;	// 36 = 0x24
	unsigned long valueDataSize;	// 40 = 0x28
	UINibDecoderHeader header;	// 44 = 0x2c
	id *objectsByObjectID;	// 96 = 0x60
	unsigned *longObjectClassIDs;	// 100 = 0x64
	char *shortObjectClassIDs;	// 104 = 0x68
	unsigned *keyMasks;	// 108 = 0x6c
	long inlinedValueKey;	// 112 = 0x70
	UINibDecoderRecursiveState recursiveState;	// 116 = 0x74
	UINibStringIDTable *keyIDTable;	// 132 = 0x84
	id delegate;	// 136 = 0x88
	UIKeyToKeyIDCache keyIDCache;	// 140 = 0x8c
	UIKeyAndScopeToValueCache valueCache;	// 728 = 0x2d8
	int lookupRounds;	// 740 = 0x2e4
	int maxPossibleLookupRounds;	// 744 = 0x2e8
	int failedByKeyMask;	// 748 = 0x2ec
	int savedByKeyMask;	// 752 = 0x2f0
}
@property(assign) id delegate;	// G=0x31ecac75; S=0x31ecac89; @synthesize
+ (id)unarchiveObjectWithData:(id)data;	// 0x31eca2bd
+ (id)unarchiveObjectWithFile:(id)file;	// 0x31eca34d
- (id)initForReadingWithData:(id)data;	// 0x31eca2a5
- (id)initForReadingWithData:(id)data error:(id *)error;	// 0x31d6fba1
- (BOOL)allowsKeyedCoding;	// 0x31d719d5
- (BOOL)containsValueForKey:(id)key;	// 0x31d719d9
- (void)dealloc;	// 0x31d76911
- (BOOL)decodeArrayOfCGFloats:(float *)cgfloats count:(int)count forKey:(id)key;	// 0x31d72885
- (BOOL)decodeArrayOfDoubles:(double *)doubles count:(int)count forKey:(id)key;	// 0x31eca555
- (BOOL)decodeArrayOfFloats:(float *)floats count:(int)count forKey:(id)key;	// 0x31eca499
- (void)decodeArrayOfObjCType:(const char *)objCType count:(unsigned)count at:(void *)at;	// 0x31ecab45
- (BOOL)decodeBoolForKey:(id)key;	// 0x31d72a51
- (const char *)decodeBytesForKey:(id)key returnedLength:(unsigned *)length;	// 0x31d71a31
- (void *)decodeBytesWithReturnedLength:(unsigned *)returnedLength;	// 0x31ecabc1
- (CGAffineTransform)decodeCGAffineTransformForKey:(id)key;	// 0x31d729ad
- (CGPoint)decodeCGPointForKey:(id)key;	// 0x31d72941
- (CGRect)decodeCGRectForKey:(id)key;	// 0x31d727f9
- (CGSize)decodeCGSizeForKey:(id)key;	// 0x31d73745
- (id)decodeDataObject;	// 0x31eca991
- (double)decodeDoubleForKey:(id)key;	// 0x31d736b9
- (float)decodeFloatForKey:(id)key;	// 0x31d732a5
- (int)decodeInt32ForKey:(id)key;	// 0x31eca3f9
- (long long)decodeInt64ForKey:(id)key;	// 0x31d72d31
- (int)decodeIntForKey:(id)key;	// 0x31d73201
- (int)decodeIntegerForKey:(id)key;	// 0x31d72b09
- (id)decodeNXObject;	// 0x31eca911
- (id)decodeObject;	// 0x31ecaa11
- (id)decodeObjectForKey:(id)key;	// 0x31d71035
- (id)decodePropertyList;	// 0x31ecaa3d
- (UIEdgeInsets)decodeUIEdgeInsetsForKey:(id)key;	// 0x31d72ca1
- (void)decodeValueOfObjCType:(const char *)objCType at:(void *)at;	// 0x31eca615
- (void)decodeValuesOfObjCTypes:(const char *)objCTypes;	// 0x31ecaabd
// declared property getter: - (id)delegate;	// 0x31ecac75
- (void)finishDecoding;	// 0x31d765c1
- (id)nextGenericKey;	// 0x31eca3b1
- (void)replaceObject:(id)object withObject:(id)object2;	// 0x31d73de5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x31ecac89
- (unsigned)systemVersion;	// 0x31ecac41
- (BOOL)validateAndIndexClasses:(const void *)classes length:(unsigned long)length;	// 0x31d70029
- (BOOL)validateAndIndexData:(id)data error:(id *)error;	// 0x31d6fd1d
- (BOOL)validateAndIndexKeys:(const void *)keys length:(unsigned long)length;	// 0x31d70501
- (BOOL)validateAndIndexObjects:(const void *)objects length:(unsigned long)length;	// 0x31d70b25
- (BOOL)validateAndIndexValues:(const void *)values length:(unsigned long)length;	// 0x31d707e1
- (int)versionForClassName:(id)className;	// 0x31ecac49
@end

