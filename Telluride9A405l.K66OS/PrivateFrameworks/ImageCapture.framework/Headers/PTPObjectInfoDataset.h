/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library

@class NSString;

@interface PTPObjectInfoDataset : NSObject {
	unsigned _storageID;	// 4 = 0x4
	unsigned short _objectFormat;	// 8 = 0x8
	unsigned short _protectionStatus;	// 10 = 0xa
	unsigned long long _objectCompressedSize;	// 12 = 0xc
	unsigned short _thumbFormat;	// 20 = 0x14
	unsigned _thumbCompressedSize;	// 24 = 0x18
	unsigned _thumbOffset;	// 28 = 0x1c
	unsigned _thumbPixWidth;	// 32 = 0x20
	unsigned _thumbPixHeight;	// 36 = 0x24
	unsigned _imagePixWidth;	// 40 = 0x28
	unsigned _imagePixHeight;	// 44 = 0x2c
	unsigned _imageBitDepth;	// 48 = 0x30
	unsigned _parentObject;	// 52 = 0x34
	unsigned short _associationType;	// 56 = 0x38
	unsigned _associationDesc;	// 60 = 0x3c
	unsigned _sequenceNumber;	// 64 = 0x40
	NSString *_filename;	// 68 = 0x44
	NSString *_captureDate;	// 72 = 0x48
	NSString *_modificationDate;	// 76 = 0x4c
	NSString *_keywords;	// 80 = 0x50
	unsigned _thmFileSize;	// 84 = 0x54
	unsigned _objectHandle;	// 88 = 0x58
}
@property(assign) unsigned long associationDesc;	// G=0x37027351; S=0x37027361; converted property
@property(assign) unsigned short associationType;	// G=0x37027331; S=0x37027341; converted property
@property(retain) NSString *captureDate;	// G=0x370273a1; S=0x370274ad; converted property
@property(retain) NSString *filename;	// G=0x37027391; S=0x3702752d; converted property
@property(assign) unsigned long imageBitDepth;	// G=0x370272f1; S=0x37027301; converted property
@property(assign) unsigned long imagePixHeight;	// G=0x370272d1; S=0x370272e1; converted property
@property(assign) unsigned long imagePixWidth;	// G=0x370272b1; S=0x370272c1; converted property
@property(retain) NSString *keywords;	// G=0x370273c1; S=0x3702741d; converted property
@property(retain) NSString *modificationDate;	// G=0x370273b1; S=0x37027465; converted property
@property(assign) unsigned short objectFormat;	// G=0x37027165; S=0x37027175; converted property
@property(assign) unsigned long objectHandle;	// G=0x370273d1; S=0x370273e1; converted property
@property(assign) unsigned long parentObject;	// G=0x37027311; S=0x37027321; converted property
@property(assign) unsigned short protectionStatus;	// G=0x37027185; S=0x37027195; converted property
@property(assign) unsigned long sequenceNumber;	// G=0x37027371; S=0x37027381; converted property
@property(assign) unsigned long storageID;	// G=0x37027145; S=0x37027155; converted property
@property(assign) unsigned long thmFileSize;	// G=0x37027231; S=0x37027241; converted property
@property(assign) unsigned long thumbCompressedSize;	// G=0x37027211; S=0x37027221; converted property
@property(assign) unsigned short thumbFormat;	// G=0x370271f1; S=0x37027201; converted property
@property(assign) unsigned long thumbOffset;	// G=0x37027251; S=0x37027261; converted property
@property(assign) unsigned long thumbPixHeight;	// G=0x37027291; S=0x370272a1; converted property
@property(assign) unsigned long thumbPixWidth;	// G=0x37027271; S=0x37027281; converted property
- (id)init;	// 0x370273f1
- (id)initWithData64:(id)data64;	// 0x37027cf1
- (id)initWithData:(id)data;	// 0x37028011
// converted property getter: - (unsigned long)associationDesc;	// 0x37027351
// converted property getter: - (unsigned short)associationType;	// 0x37027331
// converted property getter: - (id)captureDate;	// 0x370273a1
- (id)content;	// 0x370279d5
- (id)content64;	// 0x3702774d
- (void)dealloc;	// 0x37027c69
- (id)description;	// 0x37027575
// converted property getter: - (id)filename;	// 0x37027391
// converted property getter: - (unsigned long)imageBitDepth;	// 0x370272f1
// converted property getter: - (unsigned long)imagePixHeight;	// 0x370272d1
// converted property getter: - (unsigned long)imagePixWidth;	// 0x370272b1
// converted property getter: - (id)keywords;	// 0x370273c1
// converted property getter: - (id)modificationDate;	// 0x370273b1
- (unsigned long)objectCompressedSize;	// 0x370271bd
- (unsigned long long)objectCompressedSize64;	// 0x370271a5
// converted property getter: - (unsigned short)objectFormat;	// 0x37027165
// converted property getter: - (unsigned long)objectHandle;	// 0x370273d1
// converted property getter: - (unsigned long)parentObject;	// 0x37027311
// converted property getter: - (unsigned short)protectionStatus;	// 0x37027185
// converted property getter: - (unsigned long)sequenceNumber;	// 0x37027371
// converted property setter: - (void)setAssociationDesc:(unsigned long)desc;	// 0x37027361
// converted property setter: - (void)setAssociationType:(unsigned short)type;	// 0x37027341
// converted property setter: - (void)setCaptureDate:(id)date;	// 0x370274ad
// converted property setter: - (void)setFilename:(id)filename;	// 0x3702752d
// converted property setter: - (void)setImageBitDepth:(unsigned long)depth;	// 0x37027301
// converted property setter: - (void)setImagePixHeight:(unsigned long)height;	// 0x370272e1
// converted property setter: - (void)setImagePixWidth:(unsigned long)width;	// 0x370272c1
// converted property setter: - (void)setKeywords:(id)keywords;	// 0x3702741d
// converted property setter: - (void)setModificationDate:(id)date;	// 0x37027465
- (void)setObjectCompressedSize:(unsigned long long)size;	// 0x370271dd
// converted property setter: - (void)setObjectFormat:(unsigned short)format;	// 0x37027175
// converted property setter: - (void)setObjectHandle:(unsigned long)handle;	// 0x370273e1
// converted property setter: - (void)setParentObject:(unsigned long)object;	// 0x37027321
// converted property setter: - (void)setProtectionStatus:(unsigned short)status;	// 0x37027195
// converted property setter: - (void)setSequenceNumber:(unsigned long)number;	// 0x37027381
// converted property setter: - (void)setStorageID:(unsigned long)anId;	// 0x37027155
// converted property setter: - (void)setThmFileSize:(unsigned long)size;	// 0x37027241
// converted property setter: - (void)setThumbCompressedSize:(unsigned long)size;	// 0x37027221
// converted property setter: - (void)setThumbFormat:(unsigned short)format;	// 0x37027201
// converted property setter: - (void)setThumbOffset:(unsigned long)offset;	// 0x37027261
// converted property setter: - (void)setThumbPixHeight:(unsigned long)height;	// 0x370272a1
// converted property setter: - (void)setThumbPixWidth:(unsigned long)width;	// 0x37027281
// converted property getter: - (unsigned long)storageID;	// 0x37027145
// converted property getter: - (unsigned long)thmFileSize;	// 0x37027231
// converted property getter: - (unsigned long)thumbCompressedSize;	// 0x37027211
// converted property getter: - (unsigned short)thumbFormat;	// 0x370271f1
// converted property getter: - (unsigned long)thumbOffset;	// 0x37027251
// converted property getter: - (unsigned long)thumbPixHeight;	// 0x37027291
// converted property getter: - (unsigned long)thumbPixWidth;	// 0x37027271
@end
