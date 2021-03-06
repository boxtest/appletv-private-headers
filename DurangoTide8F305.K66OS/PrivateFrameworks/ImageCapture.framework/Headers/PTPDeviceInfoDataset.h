/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

#import <NSObject.h> // Unknown library

@class NSMutableData, NSString, NSMutableArray;

@interface PTPDeviceInfoDataset : NSObject {
	NSMutableData *_content;	// 4 = 0x4
	BOOL _dirty;	// 8 = 0x8
	unsigned short _standardVersion;	// 10 = 0xa
	unsigned _vendorExtensionID;	// 12 = 0xc
	unsigned short _vendorExtensionVersion;	// 16 = 0x10
	NSString *_vendorExtensionDescription;	// 20 = 0x14
	unsigned short _functionalMode;	// 24 = 0x18
	NSMutableArray *_operationsSupported;	// 28 = 0x1c
	NSMutableArray *_eventsSupported;	// 32 = 0x20
	NSMutableArray *_devicePropertiesSupported;	// 36 = 0x24
	NSMutableArray *_captureFormats;	// 40 = 0x28
	NSMutableArray *_imageFormats;	// 44 = 0x2c
	NSString *_manufacturer;	// 48 = 0x30
	NSString *_model;	// 52 = 0x34
	NSString *_deviceVersion;	// 56 = 0x38
	NSString *_serialNumber;	// 60 = 0x3c
	BOOL _readOnlyObject;	// 64 = 0x40
}
@property(retain) NSMutableArray *captureFormats;	// G=0x312f75b1; S=0x312f7865; converted property
@property(retain) NSMutableData *content;	// G=0x312f7a41; S=0x312f7d29; converted property
@property(retain) NSMutableArray *devicePropertiesSupported;	// G=0x312f75a1; S=0x312f78c9; converted property
@property(retain) NSString *deviceVersion;	// G=0x312f75f1; S=0x312f771d; converted property
@property(retain) NSMutableArray *eventsSupported;	// G=0x312f7591; S=0x312f792d; converted property
@property(assign) unsigned short functionalMode;	// G=0x312f7555; S=0x312f7565; converted property
@property(retain) NSMutableArray *imageFormats;	// G=0x312f75c1; S=0x312f7801; converted property
@property(retain) NSString *manufacturer;	// G=0x312f75d1; S=0x312f77b5; converted property
@property(retain) NSString *model;	// G=0x312f75e1; S=0x312f7769; converted property
@property(retain) NSMutableArray *operationsSupported;	// G=0x312f7581; S=0x312f7991; converted property
@property(retain) NSString *serialNumber;	// G=0x312f7601; S=0x312f76d1; converted property
@property(assign) unsigned short standardVersion;	// G=0x312f74c1; S=0x312f74d1; converted property
@property(retain) NSString *vendorExtensionDescription;	// G=0x312f7545; S=0x312f79f5; converted property
@property(assign) unsigned long vendorExtensionID;	// G=0x312f74ed; S=0x312f74fd; converted property
@property(assign) unsigned short vendorExtensionVersion;	// G=0x312f7519; S=0x312f7529; converted property
- (id)init;	// 0x312f7ca9
- (id)initWithData:(id)data;	// 0x312f7c0d
- (id)initWithMutableData:(id)mutableData;	// 0x312f7b91
- (id)canonicalManufacturer;	// 0x312f7611
// converted property getter: - (id)captureFormats;	// 0x312f75b1
// converted property getter: - (id)content;	// 0x312f7a41
- (unsigned long)contentSize;	// 0x312f7a65
- (void)copyContent:(char *)content ofSize:(unsigned long)size;	// 0x312f8129
- (void)dealloc;	// 0x312f7a95
- (id)description;	// 0x312f817d
// converted property getter: - (id)devicePropertiesSupported;	// 0x312f75a1
// converted property getter: - (id)deviceVersion;	// 0x312f75f1
// converted property getter: - (id)eventsSupported;	// 0x312f7591
// converted property getter: - (unsigned short)functionalMode;	// 0x312f7555
// converted property getter: - (id)imageFormats;	// 0x312f75c1
// converted property getter: - (id)manufacturer;	// 0x312f75d1
// converted property getter: - (id)model;	// 0x312f75e1
// converted property getter: - (id)operationsSupported;	// 0x312f7581
// converted property getter: - (id)serialNumber;	// 0x312f7601
// converted property setter: - (void)setCaptureFormats:(id)formats;	// 0x312f7865
// converted property setter: - (void)setContent:(id)content;	// 0x312f7d29
// converted property setter: - (void)setDevicePropertiesSupported:(id)supported;	// 0x312f78c9
// converted property setter: - (void)setDeviceVersion:(id)version;	// 0x312f771d
// converted property setter: - (void)setEventsSupported:(id)supported;	// 0x312f792d
// converted property setter: - (void)setFunctionalMode:(unsigned short)mode;	// 0x312f7565
// converted property setter: - (void)setImageFormats:(id)formats;	// 0x312f7801
// converted property setter: - (void)setManufacturer:(id)manufacturer;	// 0x312f77b5
// converted property setter: - (void)setModel:(id)model;	// 0x312f7769
// converted property setter: - (void)setOperationsSupported:(id)supported;	// 0x312f7991
// converted property setter: - (void)setSerialNumber:(id)number;	// 0x312f76d1
// converted property setter: - (void)setStandardVersion:(unsigned short)version;	// 0x312f74d1
// converted property setter: - (void)setVendorExtensionDescription:(id)description;	// 0x312f79f5
// converted property setter: - (void)setVendorExtensionID:(unsigned long)anId;	// 0x312f74fd
// converted property setter: - (void)setVendorExtensionVersion:(unsigned short)version;	// 0x312f7529
// converted property getter: - (unsigned short)standardVersion;	// 0x312f74c1
- (void)updateContent;	// 0x312f7e69
// converted property getter: - (id)vendorExtensionDescription;	// 0x312f7545
// converted property getter: - (unsigned long)vendorExtensionID;	// 0x312f74ed
// converted property getter: - (unsigned short)vendorExtensionVersion;	// 0x312f7519
@end

