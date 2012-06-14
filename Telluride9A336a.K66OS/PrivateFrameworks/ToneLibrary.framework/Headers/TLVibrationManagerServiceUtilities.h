/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import <NSObject.h> // Unknown library


@interface TLVibrationManagerServiceUtilities : NSObject {
}
+ (BOOL)_isValidObject:(id)object error:(id *)error forValidationBlock:(id)validationBlock;	// 0x34f3bac9
+ (BOOL)_objectIsValidUserGeneratedVibrationPattern:(id)pattern error:(id *)error;	// 0x34f3bb65
+ (id)_sharedResourceFilePathForRelativeFilePath:(id)relativeFilePath;	// 0x34f3c109
+ (id)_sharedResourceURLForRelativeFilePath:(id)relativeFilePath;	// 0x34f3c129
+ (id)dictionaryFromXPCObject:(void *)xpcobject error:(id *)error;	// 0x34f3b6e1
+ (id)errorWithDomain:(id)domain description:(id)description;	// 0x34f3b9d1
+ (void *)newXPCObjectFromDictionary:(id)dictionary inReplyToXPCObject:(void *)xpcobject error:(id *)error;	// 0x34f3b86d
+ (BOOL)objectIsValidUserGeneratedVibrationPatternsDictionary:(id)dictionary error:(id *)error;	// 0x34f3bda9
+ (id)userGeneratedVibrationStoreFileURL;	// 0x34f3c165
@end
