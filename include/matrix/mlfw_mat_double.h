#ifndef __MLFW_MAT_DOUBLE__
#define __MLFW_MAT_DOUBLE__

struct __mlfw_mat_double__;
typedef __mlfw_mat_double__ mlfw_mat_double;

mlfw_mat_double * mlfw_mat_double_create_new(dimension_t rows, dimension_t columns);
void mlfw_mat_double_destroy(mlfw_mat_double * matrix);
mlfw_mat_double * mlfw_mat_double_from_csv(const char * csv_file_name);


#endif