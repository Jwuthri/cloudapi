#import <Foundation/Foundation.h>
#import "SWGObject.h"

/**
* OpenALPR Cloud API
* No descripton provided (generated by Swagger Codegen https://github.com/swagger-api/swagger-codegen)
*
* OpenAPI spec version: 2.0.1
* 
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#import "SWGInlineResponse200ProcessingTime.h"
#import "SWGPlateDetails.h"
#import "SWGRegionOfInterest.h"


@protocol SWGInlineResponse200
@end

@interface SWGInlineResponse200 : SWGObject


@property(nonatomic) SWGInlineResponse200ProcessingTime* processingTime;
/* Width of the uploaded image in pixels [optional]
 */
@property(nonatomic) NSNumber* imgWidth;
/* Height of the input image in pixels [optional]
 */
@property(nonatomic) NSNumber* imgHeight;
/* The number of API credits that were used to process this image [optional]
 */
@property(nonatomic) NSNumber* creditCost;
/* The number of API credits used this month [optional]
 */
@property(nonatomic) NSNumber* creditsMonthlyUsed;
/* The maximum number of API credits available this month according to your plan [optional]
 */
@property(nonatomic) NSNumber* creditsMonthlyTotal;

@property(nonatomic) NSArray<SWGPlateDetails>* results;
/* Describes the areas analyzed in the input image [optional]
 */
@property(nonatomic) NSArray<SWGRegionOfInterest>* regionsOfInterest;
/* Epoch time that the image was processed in milliseconds [optional]
 */
@property(nonatomic) NSNumber* epochTime;
/* API format version [optional]
 */
@property(nonatomic) NSNumber* version;
/* Specifies the type of data in this response [optional]
 */
@property(nonatomic) NSString* dataType;

@end
