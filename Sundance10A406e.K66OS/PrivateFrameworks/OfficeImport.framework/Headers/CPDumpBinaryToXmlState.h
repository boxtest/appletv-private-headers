/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSString, NSMutableDictionary;

@interface CPDumpBinaryToXmlState : NSObject {
	NSString *mCurrentFieldName;	// 4 = 0x4
	NSMutableDictionary *mFieldNameToValueMap;	// 8 = 0x8
}
- (id)init;	// 0x3515e405
- (void)cacheValueforCurrentField:(id)field;	// 0x3515e50d
- (void)dealloc;	// 0x3515e469
- (void)setCurrentField:(id)field;	// 0x3515e4cd
- (id)valueForCurrentField;	// 0x3515e53d
- (id)valueForField:(id)field;	// 0x3515e569
@end
