/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library

@class NSMutableData, NSString;

@interface PTPObjectInfoDataset : NSObject {
	NSMutableData *_content;	// 4 = 0x4
	BOOL _dirty;	// 8 = 0x8
	unsigned _storageID;	// 12 = 0xc
	unsigned short _objectFormat;	// 16 = 0x10
	unsigned short _protectionStatus;	// 18 = 0x12
	unsigned long long _objectCompressedSize;	// 20 = 0x14
	unsigned short _thumbFormat;	// 28 = 0x1c
	unsigned _thumbCompressedSize;	// 32 = 0x20
	unsigned _thumbOffset;	// 36 = 0x24
	unsigned _thumbPixWidth;	// 40 = 0x28
	unsigned _thumbPixHeight;	// 44 = 0x2c
	unsigned _imagePixWidth;	// 48 = 0x30
	unsigned _imagePixHeight;	// 52 = 0x34
	unsigned _imageBitDepth;	// 56 = 0x38
	unsigned _parentObject;	// 60 = 0x3c
	unsigned short _associationType;	// 64 = 0x40
	unsigned _associationDesc;	// 68 = 0x44
	unsigned _sequenceNumber;	// 72 = 0x48
	NSString *_filename;	// 76 = 0x4c
	NSString *_captureDate;	// 80 = 0x50
	NSString *_modificationDate;	// 84 = 0x54
	NSString *_keywords;	// 88 = 0x58
	BOOL _readOnlyObject;	// 92 = 0x5c
	unsigned _thmFileSize;	// 96 = 0x60
	unsigned _objectHandle;	// 100 = 0x64
}
@property(assign) unsigned long associationDesc;	// G=0x332cf1ed; S=0x332cf1fd; converted property
@property(assign) unsigned short associationType;	// G=0x332cf1c1; S=0x332cf1d1; converted property
@property(retain) NSString *captureDate;	// G=0x332cf255; S=0x332cf33d; converted property
@property(retain) NSMutableData *content;	// G=0x332cf439; S=0x332cf761; converted property
@property(retain) id content64;	// G=0x332cf415; S=0x332cf9e9; converted property
@property(retain) NSString *filename;	// G=0x332cf245; S=0x332cf3c9; converted property
@property(assign) unsigned long imageBitDepth;	// G=0x332cf169; S=0x332cf179; converted property
@property(assign) unsigned long imagePixHeight;	// G=0x332cf13d; S=0x332cf14d; converted property
@property(assign) unsigned long imagePixWidth;	// G=0x332cf111; S=0x332cf121; converted property
@property(retain) NSString *keywords;	// G=0x332cf275; S=0x332cf2a5; converted property
@property(retain) NSString *modificationDate;	// G=0x332cf265; S=0x332cf2f1; converted property
@property(assign) unsigned short objectFormat;	// G=0x332cef75; S=0x332cef85; converted property
@property(assign) unsigned long objectHandle;	// G=0x332cf285; S=0x332cf295; converted property
@property(assign) unsigned long parentObject;	// G=0x332cf195; S=0x332cf1a5; converted property
@property(assign) unsigned short protectionStatus;	// G=0x332cefa1; S=0x332cefb1; converted property
@property(assign) unsigned long sequenceNumber;	// G=0x332cf219; S=0x332cf229; converted property
@property(assign) unsigned long storageID;	// G=0x332cef49; S=0x332cef59; converted property
@property(assign) unsigned long thmFileSize;	// G=0x332cf06d; S=0x332cf07d; converted property
@property(assign) unsigned long thumbCompressedSize;	// G=0x332cf041; S=0x332cf051; converted property
@property(assign) unsigned short thumbFormat;	// G=0x332cf015; S=0x332cf025; converted property
@property(assign) unsigned long thumbOffset;	// G=0x332cf08d; S=0x332cf09d; converted property
@property(assign) unsigned long thumbPixHeight;	// G=0x332cf0e5; S=0x332cf0f5; converted property
@property(assign) unsigned long thumbPixWidth;	// G=0x332cf0b9; S=0x332cf0c9; converted property
- (id)init;	// 0x332cf6e1
- (id)initWithData:(id)data;	// 0x332cf645
- (id)initWithMutableData64:(id)mutableData64;	// 0x332cf54d
- (id)initWithMutableData:(id)mutableData;	// 0x332cf5c9
// converted property getter: - (unsigned long)associationDesc;	// 0x332cf1ed
// converted property getter: - (unsigned short)associationType;	// 0x332cf1c1
// converted property getter: - (id)captureDate;	// 0x332cf255
// converted property getter: - (id)content;	// 0x332cf439
// converted property getter: - (id)content64;	// 0x332cf415
- (unsigned long)contentSize;	// 0x332cf48d
- (unsigned long)contentSize64;	// 0x332cf45d
- (void)copyContent:(char *)content ofSize:(unsigned long)size;	// 0x332d0141
- (void)dealloc;	// 0x332cf4bd
- (id)description;	// 0x332d0195
// converted property getter: - (id)filename;	// 0x332cf245
// converted property getter: - (unsigned long)imageBitDepth;	// 0x332cf169
// converted property getter: - (unsigned long)imagePixHeight;	// 0x332cf13d
// converted property getter: - (unsigned long)imagePixWidth;	// 0x332cf111
// converted property getter: - (id)keywords;	// 0x332cf275
// converted property getter: - (id)modificationDate;	// 0x332cf265
- (unsigned long)objectCompressedSize;	// 0x332cefdd
- (unsigned long long)objectCompressedSize64;	// 0x332cefcd
// converted property getter: - (unsigned short)objectFormat;	// 0x332cef75
// converted property getter: - (unsigned long)objectHandle;	// 0x332cf285
// converted property getter: - (unsigned long)parentObject;	// 0x332cf195
// converted property getter: - (unsigned short)protectionStatus;	// 0x332cefa1
// converted property getter: - (unsigned long)sequenceNumber;	// 0x332cf219
// converted property setter: - (void)setAssociationDesc:(unsigned long)desc;	// 0x332cf1fd
// converted property setter: - (void)setAssociationType:(unsigned short)type;	// 0x332cf1d1
// converted property setter: - (void)setCaptureDate:(id)date;	// 0x332cf33d
// converted property setter: - (void)setContent64:(id)a64;	// 0x332cf9e9
// converted property setter: - (void)setContent:(id)content;	// 0x332cf761
// converted property setter: - (void)setFilename:(id)filename;	// 0x332cf3c9
// converted property setter: - (void)setImageBitDepth:(unsigned long)depth;	// 0x332cf179
// converted property setter: - (void)setImagePixHeight:(unsigned long)height;	// 0x332cf14d
// converted property setter: - (void)setImagePixWidth:(unsigned long)width;	// 0x332cf121
// converted property setter: - (void)setKeywords:(id)keywords;	// 0x332cf2a5
// converted property setter: - (void)setModificationDate:(id)date;	// 0x332cf2f1
- (void)setObjectCompressedSize:(unsigned long long)size;	// 0x332ceff5
// converted property setter: - (void)setObjectFormat:(unsigned short)format;	// 0x332cef85
// converted property setter: - (void)setObjectHandle:(unsigned long)handle;	// 0x332cf295
// converted property setter: - (void)setParentObject:(unsigned long)object;	// 0x332cf1a5
// converted property setter: - (void)setProtectionStatus:(unsigned short)status;	// 0x332cefb1
// converted property setter: - (void)setSequenceNumber:(unsigned long)number;	// 0x332cf229
// converted property setter: - (void)setStorageID:(unsigned long)anId;	// 0x332cef59
// converted property setter: - (void)setThmFileSize:(unsigned long)size;	// 0x332cf07d
// converted property setter: - (void)setThumbCompressedSize:(unsigned long)size;	// 0x332cf051
// converted property setter: - (void)setThumbFormat:(unsigned short)format;	// 0x332cf025
// converted property setter: - (void)setThumbOffset:(unsigned long)offset;	// 0x332cf09d
// converted property setter: - (void)setThumbPixHeight:(unsigned long)height;	// 0x332cf0f5
// converted property setter: - (void)setThumbPixWidth:(unsigned long)width;	// 0x332cf0c9
// converted property getter: - (unsigned long)storageID;	// 0x332cef49
// converted property getter: - (unsigned long)thmFileSize;	// 0x332cf06d
// converted property getter: - (unsigned long)thumbCompressedSize;	// 0x332cf041
// converted property getter: - (unsigned short)thumbFormat;	// 0x332cf015
// converted property getter: - (unsigned long)thumbOffset;	// 0x332cf08d
// converted property getter: - (unsigned long)thumbPixHeight;	// 0x332cf0e5
// converted property getter: - (unsigned long)thumbPixWidth;	// 0x332cf0b9
- (void)updateContent;	// 0x332cfc6d
- (void)updateContent64;	// 0x332cfedd
@end
